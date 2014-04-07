/*
compile with: g++ -o test `pkg-config --libs --cflags opencv`  `imlib2-config --cflags --libs` test.cpp

 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <sys/wait.h>
#include <signal.h>
#include <Imlib2.h>
#include <sys/stat.h>

//for opencv
#include <vector>
#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>


int main(void)
{
  printf("I am in check_image...\n");
  Imlib_Image imtemp = imlib_load_image("/home/sbroniko/temp_photo.jpg");
  imlib_context_set_image(imtemp);
  imlib_save_image("/aux/sbroniko/images/imlibtest.jpg");
  imlib_free_image_and_decache();
  cv::Mat temp;
  printf("temp declared\n");
  temp = (cv::Mat) cv::imread("/home/sbroniko/temp_photo.jpg", CV_LOAD_IMAGE_COLOR);
  printf("after imread\n");
  cv::destroyAllWindows();
  cv::namedWindow("windowname");
  cv::imshow("windowname", temp);
    
  std::vector<int> params = std::vector<int>(2);
  params[0] = CV_IMWRITE_JPEG_QUALITY;
  params[1] = 75;
  cv::vector<uchar> compressed;
  cv::imencode(".jpg", temp, compressed, params);
  printf("after imencode\n");

  cv::Mat temp2;
  temp2 = cv::imdecode(cv::Mat(compressed), CV_LOAD_IMAGE_COLOR);
  printf("after imdecode\n");

  if (!imwrite("/aux/sbroniko/images/test.jpg", temp2))
    printf("ERROR!");
  printf("after imwrite\n");
  cv::waitKey(0);

}
