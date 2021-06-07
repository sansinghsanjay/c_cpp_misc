/*
Sanjay Singh
san.singhsanjay@gmail.com
June-2021
To load mnist image data with its labels
Compile: $ g++ loading_image_data_and_labels.cpp -lmxnet
*/

// libraries
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

// global constants
const string training_file_path = "/home/sansingh/github_repo/mxnet_mnist_cpp/dataset/train_data.csv";
const int TOTAL_FILES = 35000;
const int IMG_W = 28;
const int IMG_H = 28;
const int IMG_C = 3;

// strotok declaration
string strtok(string, const char delims);

// main function
int main() {
	// vars
	string training_filenames[TOTAL_FILES];
	int training_labels[TOTAL_FILES];
	static int image_mat[TOTAL_FILES][IMG_W][IMG_H][IMG_C];
	// reading training file
	cout<<"Reading training data csv file...\n";
	int temp_i = -1;
	string file_str, temp_str, token;
	bool temp_bool = true;
	fstream file_ptr;
	file_ptr.open(training_file_path, ios::in);
	if(file_ptr.is_open()) {
		string file_str;
		while(getline(file_ptr, file_str)) {
			if(temp_i >= 0) {
				stringstream ss(file_str);
				while(getline(ss, token, ',')) {
					if(temp_bool == true) {
						training_filenames[temp_i] = token;
						temp_bool = false;
					} else {
						training_labels[temp_i] = stoi(token);
						temp_bool = true;
					}
				}
			}
			temp_i += 1;
		}
	}
	cout<<"Successfully completed reading training data csv file\n";
	return 0;
}
