# update Robot Speed - Spec

## Problem statement
The user can change the robot's speed while the program is runnong.
The updated speed will appear in the robot status display

## Types involved
- Robot
-RobotManager

## Public interface
- void Robot::setSpeed(int newSpeed);
- int Robot::getSpeed() const;
- void RobotManager::moveRobot();

#Inputs and outputs

Input:
-User enters a speed value.

Output:
-Program updates robot speed
-Program displays updated speed
-Program rejects negative values

## Edge cases
-Speed is negative
-Speed is zero
-Speed is large

## Three tests
-Normal: set speed to 10
-Edge: set speed to 0
-Boundary: reject negative speed

## Design decisions
The Robot class stores the speed value
RobotManger handlse user interaction and calls robot methods
Keeps the design object-oriented and organized