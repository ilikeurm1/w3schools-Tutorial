#include <iostream>

using namespace std;

int main() {
    /*
    else syntax
    if (condition) {
        Do something
    } else {
        Otherwise do something else
    }
    */

    // example
    int x, y;

    cout << "Write a number please: ";
    cin >> x;
    cout << "Give another one: ";
    cin >> y;

    if (x == y) {
        cout << "These numbers are equal" << "\n";
    } else {
        cout << "X is not equal to Y" << "\n";
    }
    
    return 0;
}
