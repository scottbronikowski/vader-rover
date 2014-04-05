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
  cv::Mat temp;
  printf("temp declared\n");
  // temp = (cv::Mat) cv::imread("/home/sbroniko/temp_photo.png", CV_LOAD_IMAGE_COLOR);
  // printf("after imread\n");

  std::vector<int> params = std::vector<int>(2);
  params[0] = CV_IMWRITE_JPEG_QUALITY;
  params[1] = 75;
  cv::vector<uchar> compressed;
  cv::imencode(".jpg", temp, compressed, params);
  printf("after imencode\n");

  cv::Mat temp2;
  temp2 = cv::imdecode(cv::Mat(compressed), CV_LOAD_IMAGE_COLOR);
  printf("after imdecode\n");

  if (!imwrite("/aux/sbroniko/images/test.png", temp2))
    printf("ERROR!");
  printf("after imwrite\n");


}
