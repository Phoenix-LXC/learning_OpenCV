/*************************************************************************
	> File Name: show_image.cpp
	> Author: linxiaocong
	> Created Time: 2019年05月04日 星期六 21时50分43秒
 ************************************************************************/

#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main()
{
	Mat srcImage;
	srcImage = imread("/home/lin/learn_OpenCV/image/carPlate.jpg");
	
	imshow("原始图", srcImage);
	waitKey(0);
	return 0;
}
