#include <iostream>
#include <opencv2/opencv.hpp>

#include "RobotManager.h"

using namespace std;

void displayMenu();

int main() {

    RobotManager manager("robot_data.txt");

    manager.openCamera();

    bool running = true;
    int choice;

    while (running) {
        displayMenu();
        cin >> choice;

        if (choice == 1) {

            manager.moveRobot();

        } else if(choice == 2) {
            manager.trackTarget();

        } else if (choice == 3) {
            manager.controlArm();

        } else if (choice == 4) {
            manager.displayRobotStatus();

        } else if (choice == 5) {
            manager.saveData("robot_data.txt");
            running = false;

        } else {
            cout << "Invalid choice. Try again." << endl;

        }
    }
    return 0;
}
void displayMenu() {
    cout << "\n=== Robot Tracking System ===" << endl;
    cout << "1. Move Robot" << endl;
    cout << "2. Start Camera Tracking" << endl;
    cout << "3. Move Robotic Arm" << endl;
    cout << "4. Display Robot Status" << endl;
    cout << "5. Save and Exit" << endl;
    cout << "Choice: ";
}