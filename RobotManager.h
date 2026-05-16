#ifndef ROBOTMANAGER_H
#define ROBOTMANAGER_H

#include <string>
#include <opencv2/opencv.hpp>

#include "Robot.h"
#include "Sensor.h"

class RobotManager {

    private:

    Robot robot;
    Sensor sensor;

    std::string saveFileName;

    cv::VideoCapture camera;
    cv::Mat frame;

    public:

    RobotManager();
    RobotManager(const std::string& fileName);

    void moveRobot();
    void trackTarget();
    void controlArm();

    void displayRobotStatus() const;

    bool openCamera();
    void processCameraFrame();

    bool saveData(const std::string& fileName);
    bool loadData(const std::string& fileName);

    void runProgram();
};
#endif