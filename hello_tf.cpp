/*
Sanjay Singh
san.singhsanjay@gmail.com
June-2021
To try out tensorflow - C library in C++
To install tensorflow - C (which will work for C++ as well), follow the official documentation:
https://www.tensorflow.org/install/lang_c
To compile this program, run the following command:
$ g++ hello_tf.cpp -ltensorflow
*/

// libraries
#include <iostream>
#include <tensorflow/c/c_api.h>

using namespace std;

int main() {
	cout<<"Hello to the powerful world of C++\n";
	cout<<"Tensorflow - C / C++ version: "<<TF_Version()<<"\n";
	return 0;
}

