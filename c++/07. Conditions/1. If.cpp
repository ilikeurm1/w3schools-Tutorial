#include <iostream>

using namespace std;

int main() {
    /*
    You already know that C++ supports the usual logical conditions from mathematics:

    Less than:                  a < b
    Less than or equal to:      a <= b
    Greater than:               a > b
    Greater than or equal to:   a >= b
    Equal to:                   a == b
    Not Equal to:               a != b

    C++ has the following conditional statements:

    Use if to specify a block of code to be executed, 
    if a specified condition is true

    Use else to specify a block of code to be executed, 
    if the same condition is false

    Use else if to specify a new condition to test, 
    if the first condition is false

    Use switch to specify many alternative blocks of code to be executed

    Syntax
    if (condition) {
        Do this shit
    }
    */

    // example
    int x, y;

    cout << "Write a number please: " << "\n";
    cin >> x;
    cout << "Give another one: " << "\n";
    cin >> y;

    if (x == y) {
        cout << "These numbers are the same" << "\n";
    }

    return 0;
}
