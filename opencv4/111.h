#pragma once
#include <iostream>
#include <opencv2/opencv.hpp>

void icvprCcaByTwoPass(const cv::Mat& _binImg, cv::Mat& _lableImg);
void icvprLabelColor(const cv::Mat& _labelImg, cv::Mat& _colorLabelImg);