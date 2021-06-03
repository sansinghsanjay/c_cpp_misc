/*
Sanjay Singh
san.singhsanjay@gmail.com
May-2021
Run this to compile this program:
g++ opencv_basic.cpp -std=c++11 `pkg-config --cflags --libs opencv` 
*/

// libraries
#include<iostream>
#include<opencv2/highgui.hpp>

using namespace std;

int main() {
	cv::Mat image;
	image = cv::imread("/home/sansingh/Downloads/people_meeting.jpg", cv::IMREAD_COLOR);
	cv::namedWindow("My First Image in C++", cv::WINDOW_AUTOSIZE);
	cv::imshow("Showing Image", image);
	cv::waitKey(0);
	return 0;
}
