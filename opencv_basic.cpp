/*
Sanjay Singh
san.singhsanjay@gmail.com
May-2021
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
