/*
Sanjay Singh
san.singhsanjay@gmail.com
June-2021
A basic program to verify access to Apache MXNet Deep Learning library
COMPILATION:
After successfully building Apache MXNet source code, "$ ninja install" command will copy the generated files (including executables) to the appropriate locations (including /usr/local/lib path) in the system. In order to make system to check for available libraries inside /usr/local/lib path, do the following:
	$ cd /etc/ld.so.conf.d/
	$ vim randomLibs.conf
Now, paste the path /usr/local/lib in the randomLibs.conf file. Save it and close it. Run the following command:
	$ sudo ldconfig
Now, come to the directory where this program is, and run the following command to compile and run this:
	$ g++ hello_MXNet.cpp -lmxnet
	$ ./a.out 
*/

// libraries
#include <iostream>
#include <mxnet-cpp/MxNetCpp.h>

using namespace std;
using namespace mxnet::cpp;

int main() {
	cout<<"Hello to the world of Aparche MXNet and C++\n";
	return 0;
}
