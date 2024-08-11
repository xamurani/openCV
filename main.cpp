#include<opencv2/core.hpp>
#include<opencv2/imgcodecs.hpp>
#include<opencv2/highgui.hpp>
#include<iostream>

using namespace cv;

int main() {


	// opening the image from the address given below.
	cv::Mat img = cv::imread("C:\\Users\\Muhammad\\OneDrive - National University of Sciences & Technology\\Pictures\\image.jpg");
	
	// create the window
	namedWindow("First OpenCV Application", WINDOW_NORMAL);
	
	// print the image in this window
	cv::imshow("First OpenCV Application", img);
	
	// And put this window in this location (0, 45)
	cv::moveWindow("First OpenCV Application", 0, 45);
	
	// when user enters a key we terminate the window.
	cv::waitKey(0);
	
	// Terminating the window.
	cv::destroyAllWindows();

	// free the main from the stack.
	return 0;
}
