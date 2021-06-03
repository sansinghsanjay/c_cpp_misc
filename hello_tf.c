/*
Sanjay Singh
san.singhsanjay@gmail.com
June-2021
To try out tensorflow - C library
To install tensorflow - C, follow the official documentation:
https://www.tensorflow.org/install/lang_c
To compile this program, run the following command:
$ gcc hello_tf.c -ltensorflow
*/

// libraries
#include <stdio.h>
#include <tensorflow/c/c_api.h>

int main() {
	printf("Hello to the powerful world of C\n");
	printf("Tensorflow - C version: %s\n", TF_Version());
	return 0;
}
