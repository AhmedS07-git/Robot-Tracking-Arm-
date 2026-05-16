#include "RobotManager.h"

#include <iostream>

using namespace std;

RobotManager::RobotManager() {
    saveFileName = "robot_data.txt";
}
RobotManager::RobotManager(const std::string& fileName) {
    saveFileName = fileName;
}

bool RobotManager::openCamera() {
    
    camera.open(0);

    if (!camera.isOpened()) {
        cout << "Camera failed to open." << endl;
        return false;
    }
    cout << "Camera opened successfully." << endl;
    return true;
}

void RobotManager::moveRobot() {
    int newSpeed;

    cout << "Enter new robot speed: ";
    cin >> newSpeed;

    if (newSpeed < 0) {
        
        cout << "Invalid speed. Speed cannot be negative." << endl;

    } else {
        robot.setSpeed(newSpeed);

        cout << "Robot speed updated to "
             << robot.getSpeed()
             << endl;
    }

}

void RobotManager::trackTarget() {
    cout << "Robot is tracking target." << endl;
}

void RobotManager::controlArm() {
    cout << "Robotic arm moving." << endl;
}

void RobotManager::displayRobotStatus() const {
    
    robot.displayStatus();

}

void RobotManager::processCameraFrame() {

    camera >> frame;

    if (!frame.empty()) {

        cv::imshow("Robot Camera", frame);
        cv::waitKey(1);
    }
}

bool RobotManager::saveData(const std::string& fileName) {

    cout << "Saving robot data to: " << fileName << endl;
    return true;
}

bool RobotManager::loadData(const std::string& fileName) {

    cout << "Loading robot data from: " << fileName << endl;
    return true;
}

void RobotManager::runProgram() {

    cout << "Running robot tracking system." << endl;
}