#include <iostream>

using namespace std;

int main() {
    /*
    else if syntax
    if (condition) {
        Do this
    } else if (other condition) {
        Do this
    } else {
        If all else fails
    }
    */

    // example
    int x, y;

    cout << "Write a number please: " << endl;
    cin >> x;
    cout << "Give another one: " << endl;
    cin >> y;

    if (x == y) {
        cout << "These numbers are the same" << endl;
    } else if (x > y) {
        cout << "X is larger than Y" << endl;
    } else {
        cout << "X is smaller than Y" << endl;
    }

    return 0;
}
