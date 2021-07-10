                    ////     ||| Open Source Computer Vision Library |||     \\\\  




//Header files of opencv

#include <opencv2/imgcodecs.hpp>      // To read and write images(imgcodecs)
#include <opencv2/highgui.hpp>        // To operate high level Graphics User Interface (GUI)(highgui)
#include <opencv2/imgproc.hpp>        // for processing an image (imgproc)
#include <iostream>                   // for c++ (input output stream)

using namespace cv;               // for using opencv library functions directly
using namespace std;              //  ..  ..    c++ standard    ..        ..        ..

void main()
{

	string path = "pics for code/Alone.jpg";      //Its defines the path of our image

	Mat img = imread(path);                       // for reading image from this path

	imshow("Alone", img);						// for displaying the image

	waitKey(0);          //Adding a delay ( 0 -> infinity delay )




}



