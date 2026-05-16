#include "Sensor.h"

Sensor::Sensor() {

    detectedX = 0;
    detectedY = 0;

    targetDetected = false;
}

void Sensor::detectTarget(const cv::Mat& frame) {

    if (!frame.empty()) {

        targetDetected = true;

        detectedX = frame.cols / 2;
        detectedY = frame.rows / 2;
    }
}

bool Sensor::isTargetDetected() const {
    return targetDetected;
}

int Sensor::getDetectedX() const {
    return detectedX;
}

int Sensor::getDetectedY() const {
    return detectedY;
}