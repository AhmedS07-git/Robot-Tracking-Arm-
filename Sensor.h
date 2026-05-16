#ifndef SENSOR_H
#define SENSOR_H
#include <opencv2/opencv.hpp>

class Sensor {
    private:

    int detectedX;
    int detectedY;

    bool targetDetected;

    public:

    Sensor();

    void detectTarget(const cv::Mat& frame);

    bool isTargetDetected() const;
    int getDetectedX() const;
    int getDetectedY() const;

};
#endif