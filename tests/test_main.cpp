#include <iostream>
#include <cassert>

#include "../Robot.h"

using namespace std;

void test_robot_initialiazation() {

    Robot r;

    assert(r.getXPosition() == 0);
    assert(r.getYPosition() == 0);
    assert(r.getSpeed() == 0);

    cout << "Robot initialization test passed." << endl;
}

int main() {

    cout << "Running tests...  " << endl;

    test_robot_initialiazation();

    cout << "All tests completed." << endl;

    return 0;
}
