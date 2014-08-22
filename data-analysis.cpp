/*
  Implementation for data analysis program
  Author: Scott Bronikowski
  Date: 4 August 2014
*/
#include "data-analysis.h"

using namespace cv;

const double sig_a = PI/8;
const double sig_b = 2.0;

int main(int argc, char** argv)
{
  if (argc != 3)
    {
      printf("Not enough arguments! Need 2: datapath num_trials\n");
      exit(1);
    }
  char* datapath = argv[1];
  int num_tracks = atoi(argv[2]);
  //initialize field
  char filename[100];
  sprintf(filename, "%ssetup.txt", datapath);
  FILE* fp = fopen(filename, "r");
  if (fp == NULL)
    {
      printf("ERROR! Setup file '%s' does not exist\n", filename);
      exit(1);
    }
  char linebuf[1000];
  float width_ft, width, height_ft, height, offset_ft, offset;
  int lines = LineCount(filename);
  int num_obstacles = lines - 3; //each obstacle has a line, and there are 3 lines for the width, height, and origin offset
  //printf("There are %d lines in %s\n", lines, filename);
  if (fgets(linebuf, 1000, fp) == NULL)
    {
      printf("Error reading line 1 of %s\n", filename);
      exit(1);
    }
  int retval1 = sscanf(linebuf, "Width (feet): %f", &width_ft);
  if (retval1 != 1)
    {
      printf("Error getting width\n");
      exit(1);
    }
  if (fgets(linebuf, 1000, fp) == NULL)
    {
      printf("Error reading line 2 of %s\n", filename);
      exit(1);
    }
  int retval2 = sscanf(linebuf, "Height (feet): %f", &height_ft);
  if (retval2 != 1)
    {
      printf("Error getting height\n");
      exit(1);
    }
  if (fgets(linebuf, 1000, fp) == NULL)
    {
      printf("Error reading line 3 of %s\n", filename);
      exit(1);
    }
  int retval3 = sscanf(linebuf, "Robot start (feet, from left): %f", &offset_ft);
  if (retval3 != 1)
    {
      printf("Error getting offset\n");
      exit(1);
    }
  // printf("read: width_ft = %f, height_ft = %f, offset_ft = %f, num_obstacles = %d\n",
  // 	 width_ft, height_ft, offset_ft, num_obstacles);
  width = width_ft * METERS_PER_FOOT;
  height = height_ft * METERS_PER_FOOT;
  offset = offset_ft * METERS_PER_FOOT;
  float left_edge, right_edge, bottom_edge, top_edge;
  bottom_edge = 0.0;
  top_edge = height;
  left_edge = -offset;
  right_edge = width - offset;

  //initialize obstacle locations
  Obstacle_t obstacles[num_obstacles];
  char temp_name[100];
  float temp_x, temp_y;
  for (int i = 0; i < num_obstacles; i++) {
    if (fgets(linebuf, 1000, fp) == NULL){
      printf("Error reading line for obstacle %d\n", i+1);
      exit(1);
    }
      //printf("linebuf: %s", linebuf);
    int left_obstacle = sscanf(linebuf, "Obstacle from left: %f;%f;%s",
			       &temp_x, &temp_y, temp_name);
    int right_obstacle = sscanf(linebuf, "Obstacle from right: %f;%f;%s",
				&temp_x, &temp_y, temp_name);
    if (left_obstacle == 3) {
      strncpy(obstacles[i].name, temp_name, 100);
      obstacles[i].loc.x = left_edge + (temp_x * METERS_PER_FOOT);
      obstacles[i].loc.y = bottom_edge + (temp_y * METERS_PER_FOOT);
    }
      if (right_obstacle == 3) {
	strncpy(obstacles[i].name, temp_name, 100);
	obstacles[i].loc.x = right_edge - (temp_x * METERS_PER_FOOT);
	obstacles[i].loc.y = bottom_edge + (temp_y * METERS_PER_FOOT);
      }
  }
  printf("%s processed:\n", filename);
  printf("\tleft_edge = %.2f, right_edge = %.2f, top_edge = %.2f\n",
  	 left_edge, right_edge, top_edge);
  for (int i = 0; i < num_obstacles; i++)
    printf("\tObstacle: %s at x = %.2f, y = %.2f\n",
	   obstacles[i].name, obstacles[i].loc.x, obstacles[i].loc.y);
  //done with setup file
  fclose(fp);
  
  //create track.txt files from imu-log.txt files
  char logbuf[100];
  char outbuf[100];
  char outbuf2[100];
  char cmdbuf[400];
  int counter = 0;
  for (int i = 0; i < num_tracks; i++){
    memset(logbuf, 0, 100);
    sprintf(logbuf, "%strial%03d/imu-log.txt", datapath, i+1);
    memset(outbuf, 0, 100);
    sprintf(outbuf, "%strial%03d/track.txt", datapath, i+1);
    memset(outbuf2, 0, 100);
    sprintf(outbuf2, "%strial%03d/trace.txt", datapath, i+1);
    memset(cmdbuf, 0, 400);
    sprintf(cmdbuf, "./log-to-track.out ./config.txt %s %s %s", logbuf, outbuf, outbuf2);
    system(cmdbuf);
    counter++;
  }
  printf("%d track.txt files created\n", counter);
  printf("%d trace.txt files created\n", counter);
  //read track data in from tracks.txt/truth.txt files files
  char namebuf[100];
  Track_t tracks[num_tracks];
  int retval;
  counter = 0;
  for (int i = 0; i < num_tracks; i++) {
    memset(namebuf, 0, 100);
    sprintf(namebuf, "%strial%03d/", datapath, i+1);
    retval = ReadTrack(namebuf, &tracks[i]);
    if (retval != 0){
      printf("Error in ReadTrack(%s, &tracks[%d])\n", namebuf, i);
      exit(1);
    }
    counter++;
    //printf("from main: %s\n", tracks[i].truth);
    //printf("for %s, num_points = %d\n", namebuf, tracks[i].num_points);
  }
  printf("%d tracks read in from tracks.txt files\n", counter);

  //grab endpoints from tracks
  Point2d endpoints[num_tracks];
  for (int i = 0; i < num_tracks; i++) {
    endpoints[i] = tracks[i].points[(tracks[i].num_points - 1)];
    // printf("endpoints[%d]: x = %f, y = %f, trial%03d\n",
    // 	   i, endpoints[i].x, endpoints[i].y, i+1);
  }

  //make matrix of angles to obstacles
  double angle_matrix[num_obstacles][num_tracks];
  for (int j = 0; j < num_obstacles; j++){
      for (int i = 0; i < num_tracks; i++){
	angle_matrix[j][i] = AngleBetween(endpoints[i], obstacles[j].loc);
      }
    }
  //print the matrix
  printf("\nMatrix of angle (radians) between robot endpoint and obstacle, by run\n      ");
  for (int i = 0; i < num_tracks; i++){
    printf("%6d", i+1);
  }
  printf("\n");
  for (int j = 0; j < num_obstacles; j++){
    printf("%s:", obstacles[j].name);
    for (int i = 0; i < num_tracks; i++){
      printf(" %5.2f", angle_matrix[j][i]);
      if (i == (num_tracks - 1))
	printf("\n");
    }
  }

  //read in sentences
  memset(filename, 0, 100);
  sprintf(filename, "%ssentences.txt", datapath);
  int num_sentences = LineCount(filename);
  FILE* sentence_fp = fopen(filename, "r");
  if (sentence_fp == NULL)
    {
      printf("ERROR! Sentence file '%s' does not exist\n", filename);
      exit(1);
    }
  //needs work: hard limit of 100 chars for sentence length
  char sentences[num_sentences][100];
  char sentence_value[100]; 
  for (int i = 0; i < num_sentences; i++) {
    if (fgets(linebuf, 1000, sentence_fp) == NULL) {
      printf("Error reading line in %s\n", filename);
      exit(1);
    }
    int sentence_items = sscanf(linebuf, "%s", sentence_value);
    if (sentence_items != 1) {
      printf("**error in sscanf for sentences**\n");
      continue;
    }
    strcpy(sentences[i], sentence_value);
    //printf("sentences[%d] = %s\n", i, sentences[i]);
  }
  fclose(sentence_fp);


  //make matrix of scores
  double the_matrix[num_sentences][num_tracks];
  for (int j = 0; j < num_sentences; j++){
    //first need to figure out how many and which obstacle(s) are in the sentence
    int obs_count = 0;
    int obs_numbers[num_obstacles];
    for (int k = 0; k < num_obstacles; k++){
      if (strstr(sentences[j], obstacles[k].name) != NULL) {//found a match
	obs_numbers[obs_count] = k;   
	obs_count++;
      } //now obs_count has the number of obstacles, and obs_numbers has the indexes into obstacles[] for the obstacle that matches
    }
    if (obs_count == 2) {  //between is our only 2-obstacle preposition so far
      for (int i = 0; i < num_tracks; i++){
	the_matrix[j][i] = Between(endpoints[i], obstacles[obs_numbers[0]].loc,
				   obstacles[obs_numbers[1]].loc);
      }
    }
    else { //we have a single-obstacle preposition, so need to figure out which one it is.
      int winner;
      for (int k = 0; k < k_num_prepositions; k++) {
	if (strstr(sentences[j], k_prepositions[k]) != NULL)  //matched
	  winner = k;
      }
      for (int i = 0; i < num_tracks; i++){
	if (winner == 0) { //matched "left"
	  the_matrix[j][i] = Left(endpoints[i], obstacles[obs_numbers[0]].loc);
	}
      	else if (winner == 1) { //matched "right"
	   the_matrix[j][i] = Right(endpoints[i], obstacles[obs_numbers[0]].loc);
	}
	else if (winner == 2) { //matched "front"
	   the_matrix[j][i] = Front(endpoints[i], obstacles[obs_numbers[0]].loc);
	}
	else if (winner == 3) { //matched "behind"
	  the_matrix[j][i] = Behind(endpoints[i], obstacles[obs_numbers[0]].loc);
	}
	else { //winner==4 matches "between", which shouldn't have happened
	  printf("ERROR IN MAKING THE MATRIX, j = %d\n", j);
	}
      }
    }
  }

  //print the matrix
  char outfile[100];
  sprintf(outfile, "%sanalysis-matrix.csv", datapath);
  FILE* out_fp = fopen(outfile, "w");
  //printf("\nSentence\\Truth");
  fprintf(out_fp,"Sentence\\Run(Truth)");
  for (int i = 0; i < num_tracks; i++){
    //printf(",%s", tracks[i].truth);
    fprintf(out_fp,",%s", tracks[i].truth);
  }
  //printf("\n");
  fprintf(out_fp,"\n");
  for (int j = 0; j < num_sentences; j++){
    //printf("%s", sentences[j]);
    fprintf(out_fp,"%s", sentences[j]);
    for (int i = 0; i < num_tracks; i++) {
      //printf(",%5.2f", the_matrix[j][i]);
      fprintf(out_fp,",%5.2f", the_matrix[j][i]);
      if (i == (num_tracks - 1)){
	//printf("\n");
	fprintf(out_fp,"\n");
      }
    }
  }
  fclose(out_fp);
  printf("\nResults matrix written to %s\n\n", outfile);
  
  //do evaluation on the matrix to find best by row and column, and keep tally of right/wrong
  char outfile2[100];
  sprintf(outfile2,"%sresults.txt",datapath);
  FILE* out_fp2 = fopen(outfile2, "w");
  printf("Sentence-to-run and run-to-sentence results below written to %s\n\n", outfile2);
  //first do rows
  double maxval;
  int row_winner[num_sentences];
  bool row_correct[num_sentences];
  int correct_count = 0;
  int total = 0;
  for (int j = 0; j < num_sentences; j++) {
    maxval = -1.0;
    for (int i = 0; i < num_tracks; i++) {
      if (the_matrix[j][i] > maxval) {
	maxval = the_matrix[j][i];
	row_winner[j] = i;
      }
    }
    if ((strcmp(sentences[j], tracks[row_winner[j]].truth)) == 0){
      row_correct[j] = true;
      correct_count++;
    }
    else {
      row_correct[j] = false;
    }
    total++;
    printf("Sentence %d '%s' matches run %d '%s' which is %s\n",
	   j+1, sentences[j], row_winner[j]+1, tracks[row_winner[j]].truth,
	   row_correct[j]? "correct" : "INCORRECT");
    fprintf(out_fp2, "Sentence %d '%s' matches run %d '%s' which is %s\n",
	    j+1, sentences[j], row_winner[j]+1, tracks[row_winner[j]].truth,
	    row_correct[j]? "correct" : "INCORRECT");
  }
  printf("\nSentence-to-run accuracy: %f\n\n", (double)correct_count/total);
  fprintf(out_fp2,"\nSentence-to-run accuracy: %f\n\n", 
	  (double)correct_count/total);

  //now do columns
  int col_winner[num_tracks];
  bool col_correct[num_tracks];
  correct_count = 0;
  total = 0;
  for (int i = 0; i < num_tracks; i++) {
    maxval = -1.0;
    for (int j = 0; j < num_sentences; j++) {
      if (the_matrix[j][i] > maxval) {
	maxval = the_matrix[j][i];
	col_winner[i] = j;
      }
    }
    if ((strcmp(tracks[i].truth, sentences[col_winner[i]])) == 0) {
      col_correct[i] = true;
      correct_count++;
    }
    else {
      col_correct[i] = false;
    }
    total++;
    printf("Run %d '%s' matches sentence %d '%s' which is %s\n",
	   i+1, tracks[i].truth, col_winner[i]+1, sentences[col_winner[i]],
	   col_correct[i]? "correct" : "INCORRECT");
    fprintf(out_fp2,"Run %d '%s' matches sentence %d '%s' which is %s\n",
	    i+1, tracks[i].truth, col_winner[i]+1, sentences[col_winner[i]],
	    col_correct[i]? "correct" : "INCORRECT");
  }
  printf("\nRun-to-sentence accuracy: %f\n\n", (double)correct_count/total);
  fprintf(out_fp2,"\nRun-to-sentence accuracy: %f\n\n", 
	  (double)correct_count/total);

  //done with outfile2
  fclose(out_fp2);

  return 0;
}

double my_exp(double x){ 
  if (x == NEGATIVE_INFINITY)
    return 0.0;
  return exp(x);
}

double sigmoid(double x, double a, double b){ //a is threshold, b is steepness
  return 1.0 / (1 + my_exp(- b * (x - a)));
}

double normalize_orientation(double angle){
  if (angle > PI) return normalize_orientation(angle - 2*PI);
  else if (angle < -PI) return normalize_orientation(angle + 2*PI);
  // if (angle > PI/2) return normalize_orientation(angle - PI);
  // else if (angle < -PI/2) return normalize_orientation(angle + PI);
  else return angle;
}

double orientation_plus(double x, double y){
  return normalize_orientation(x+y);
}

double orientation_minus(double x, double y){
  return normalize_orientation(x-y);
}

//gives the angle from p2 back to p1
double AngleBetween(Point2d p1, Point2d p2){ 
  return atan2(p1.y - p2.y, p1.x - p2.x);} //always returns [-pi, pi)

//the prepositional functions below return a value based on the difference between
//the observed angle and the desired angle (divided by PI)
//this gives a value x between 0 (best) and -1 (worst), so taking 1 - x
//scales to [0,1) with higher still better
double Left(Point2d robot, Point2d obstacle){
  double angle = AngleBetween(robot,obstacle);
  return 1 - (fabs(fabs(angle) - PI)/PI);
}

double Right(Point2d robot, Point2d obstacle){
  double angle = AngleBetween(robot,obstacle);
  return 1 - (fabs(angle)/PI); //no need to normalize here b/c atan2 is always between +/-pi
}

double Front(Point2d robot, Point2d obstacle){
  double angle = AngleBetween(robot,obstacle);
  return 1-fabs(normalize_orientation(angle - (-PI/2)))/PI;
}

double Behind(Point2d robot, Point2d obstacle){
  double angle = AngleBetween(robot,obstacle);
  return 1 - (fabs(normalize_orientation(angle - PI/2))/PI);
}

double Between(Point2d robot, Point2d obstacle1, Point2d obstacle2){
  double angle1 = AngleBetween(robot,obstacle1);
  double angle2 = AngleBetween(robot,obstacle2);
  //is it necessary to compute the angle between the two obstacles?
  //or will the difference between the angles always be compared to pi?
  //return -fabs(PI - fabs(angle1 - angle2));
  return 1 - (fabs(PI - fabs(angle1 - angle2))/PI);
}

Point2d ReadEndpoint(char* filename){
  FILE* fp = fopen(filename,"r");
  char linebuf[1000];
  float X, Y, Theta;
  Point2d retval;
  while (fgets(linebuf,1000,fp)!=NULL){
    int track_items = sscanf(linebuf,"X:%f,Y:%f,Theta:%f",&X,&Y,&Theta);
    if (track_items != 3)
      printf("ERROR in sscanf");}
  retval.x = X;
  retval.y = Y;
  return retval;
}

int LineCount(char* filename){
  int count = 0;
  int ch;
  FILE* fp = fopen(filename, "r");
  if (fp == NULL) {
    printf("Error in LineCount: file %s does not exist\n", filename);
    return 0;
  }
  while (ch != EOF){
    ch = fgetc(fp);
    if (ch == '\n')
      count++;}
  fclose(fp);
  return count;
}

int ReadTrack(char* path, Track_t* track){
  char truthbuf[100];
  char trackbuf[100];
  char linebuf[1000];
  sprintf(truthbuf, "%struth.txt", path);
  sprintf(trackbuf, "%strack.txt", path);
  //first get truth string
  FILE* truth_fp = fopen(truthbuf, "r");
  if (truth_fp == NULL) {
      printf("ERROR! Truth file '%s' does not exist\n", truthbuf);
      return 1;
  }
  char truth_value[100];
  if (fgets(linebuf, 1000, truth_fp) != NULL) { //successful read
    int truth_items = sscanf(linebuf,"%s", truth_value);
    if (truth_items != 1) { //bad sscanf
      printf("ReadTrack error in sscanf\n");
      fclose(truth_fp);
      return 1;
    }
    else { //good sscanf
      strcpy(track->truth, truth_value);
      //printf("truth_value = %s, track->truth = %s\n", truth_value, track->truth);
      fclose(truth_fp);
    }
  }
  else { //read failed
    printf("ReadTrack fgets returned NULL\n");
    fclose(truth_fp);
    return 1;
  }
  //now read track file
  track->num_points = LineCount(trackbuf);
  FILE* track_fp = fopen(trackbuf, "r");
  if (track_fp == NULL) {
    printf("ERROR! Track file '%s' does not exist\n", trackbuf);
    return 1;
  }
  track->points = new Point2d[track->num_points]; //where to delete these?
  track->thetas = new float[track->num_points];
  float X, Y, Theta;
  for (int i = 0; i < track->num_points; i++) {
    if (fgets(linebuf, 1000, track_fp) == NULL) {
      printf("Error reading line in %s\n", trackbuf);
      return 1;
    }
    int track_items = sscanf(linebuf,"X:%f,Y:%f,Theta:%f",&X,&Y,&Theta);
    if (track_items != 3){
      printf("******************ERROR in sscanf****************\n");
      continue;
    }
    track->points[i].x = X;
    track->points[i].y = Y;
    track->thetas[i] = Theta;
  }
  //success if we get here
  fclose(track_fp);
  return 0;
}
