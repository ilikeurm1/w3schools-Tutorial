#include <iostream>

using namespace std;

/* Return Values
The void keyword, used in the previous examples, indicates that the function should not return a value.
If you want the function to return a value, you can use a data type (such as int, string, etc.) instead of void,
and use the return keyword inside the function:
*/

int Sum(int x, int y) {
    return x + y;
}

int Double(int x) {
    return x * 2;
}

int main() {
    /*
    This example returns the sum of a function with two parameters:

    Own addition (not in tutorial)
    Then doubles the result
    */

    cout << Double(Sum(8, 9)) << "\n";

    // You can store return in a variable. (duuuh)
    int z = Double(Sum(1, 2));

    cout << z << "\n";

    return 0;
}
