#include <iostream>
#include <opencv2/opencv.hpp>

int main() {
    cv::VideoCapture capture(0);  // Open the default camera

    if (!capture.isOpened()) {
        std::cerr << "Failed to open the webcam!" << std::endl;
        return -1;
    }

    cv::Mat frame;
    capture.read(frame);  // Read a frame from the camera

    if (frame.empty()) {
        std::cerr << "Failed to capture frame from the webcam!" << std::endl;
        return -1;
    }

    cv::imshow("Webcam", frame);  // Display the captured frame

    cv::waitKey(0);  // Wait for a key press

    return 0;
}
