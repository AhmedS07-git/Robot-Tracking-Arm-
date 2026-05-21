#include <iostream>
#include <cassert>

#include "../Robot.h"

int main() {
    Robot robot;


assert(robot.getXPosition() == 0);
assert(robot.getYPosition() == 0);
assert(robot.getSpeed() == 0);
assert(robot.getDirection() == 0);
assert(robot.getArmAngle() == 0);

robot.setSpeed(10);
assert(robot.getSpeed() == 10);

robot.setSpeed(25);
assert(robot.getSpeed() == 25);

robot.setSpeed(0);
assert(robot.getSpeed() == 0);

robot.moveArm(90);
assert(robot.getArmAngle() == 90);

robot.moveArm(45);
assert(robot.getArmAngle() == 45);

robot.moveArm(180);
assert(robot.getArmAngle() == 180);

robot.startTracking();

robot.stopTracking();

robot.updateTargetPosition(100, 200);

return 0;
}