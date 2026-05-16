#include "Robot.h"

#include <iostream>

using namespace std;

Robot::Robot() {
    xPosition = 0;
    yPosition = 0;

    speed = 0;
    direction = 0;

    armAngle = 0;

    targetX = 0;
    targetY = 0;

    trackingEnabled = false;
}

Robot::Robot(int x, int y) {

    xPosition = x;
    yPosition = y;

    speed = 0;
    direction = 0;

    armAngle = 0;

    targetX = 0;
    targetY = 0;

    trackingEnabled = false;
}

void Robot::startTracking() {
    trackingEnabled = true;

}

void Robot::stopTracking() {
    trackingEnabled = false;

}

void Robot::updateTargetPosition(int x, int y) {

    targetX = x;
    targetY = y;
}

void Robot::moveArm(int angle) {
    armAngle = angle;

}

void Robot::displayStatus() const {

    cout << "Robot Position: ("
    << xPosition << ", "
    << yPosition << ")" << endl;

}
int Robot::getXPosition() const {
    return xPosition;
}
int Robot::getYPosition() const {
    return yPosition;
}

int Robot::getSpeed() const {
    return speed;

}

int Robot::getDirection() const {
    return direction;
}
int Robot::getArmAngle() const {
    return armAngle;
}

void Robot::setSpeed(int newSpeed) {
    speed = newSpeed;
}