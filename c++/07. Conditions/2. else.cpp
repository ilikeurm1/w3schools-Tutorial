#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    /*
    else syntax
    if (condition) {
        Do this shit
    } else {
        Otherwise do this
    }
    */

    // example

    int x, y;
    cout << "Write a number please: ";
    cin >> x;
    cout << "Give another one: ";
    cin >> y;

    if (x == y) {
        cout << "These numbers are equal" << endl;
    }
    else {
        cout << "X is not equal to Y" << endl;
    }
    
    return 0;
}


