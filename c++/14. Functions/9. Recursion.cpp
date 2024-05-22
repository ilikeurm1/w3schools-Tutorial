#include <iostream>

using namespace std;

int Factorial(int x);

int main() {
    /* Recursion
    Recursion is the technique of making a function call itself.
    This technique provides a way to break complicated problems down into simple problems which are easier to solve.

    Recursion may be a bit difficult to understand.
    The best way to figure out how it works is to experiment with it.
    */

    cout << Factorial(10) << "\n";
    // Outputs: 3628800 which 10!

    return 0;
}

int Factorial(int x) {
    if (x > 1) {
        return x * Factorial(x - 1);
    } else {
        return 1;
    }
}
