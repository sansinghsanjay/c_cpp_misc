/*
To compile this program:
$ g++ basic_opencv.cpp -std=c++11 `pkg-config --cflags --libs opencv`
*/

#include <iostream>
#include <opencv2/highgui.hpp>

using namespace std;

int main() {
	int image_mat[1][28][28][3];
	cv::Mat image;
	image = cv::imread("/home/sansingh/Downloads/man_jumping_aircraft.jpg", cv::IMREAD_COLOR);
	//image_mat[0] = image;
	cout<<"Type: "<<typeid(image).name()<<endl;
	cout<<"Successfully read image"<<endl;
	cout<<image.dims<<endl;
	cout<<image.size()<<endl;
	cout<<image.channels()<<endl;
	cout<<"___________"<<endl;
	cv::Size image_size = image.size();
	cout<<"Image Width: "<<image_size.width<<endl;
	cout<<"Image Height: "<<image_size.height<<endl;
	return 0;
}
