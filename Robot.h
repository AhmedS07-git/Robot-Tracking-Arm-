#ifndef ROBOT_H
#define ROBOT_H

#include <string>

class Robot {

    private:

    int xPosition;
    int yPosition;

    int speed;
    int direction;

    int armAngle;

    int targetX;
    int targetY;

    bool trackingEnabled;

    public:

    Robot();
    Robot(int x, int y);

    void startTracking();
    void stopTracking();
    void updateTargetPosition(int x, int y);

    void moveArm(int angle);

    void displayStatus() const;

    int getXPosition() const;
    int getYPosition() const;
    int getSpeed() const;
    int getDirection() const;
    int getArmAngle() const;

    void setSpeed(int newSpeed);


};

#endif