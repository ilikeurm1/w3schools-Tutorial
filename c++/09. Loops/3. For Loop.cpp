#include <iostream>

using namespace std;

int main() {
    /*
    When you know exactly how many times you want to loop through a block of code, 
    use the for loop instead of a while loop:

    for (statement 1 (init of loop); statement 2 (condition); statement 3 (probably the increment of statement 1)) {
        // code block to be executed
    }

    Statement 1 is executed (one time) before the execution of the code block.

    Statement 2 defines the condition for executing the code block.

    Statement 3 is executed (every time) after the code block has been executed.

    The example below will print the numbers 0 to 4:
    */

    for (int i = 0; i < 5; i++) {
        cout << i << "\n";
    }

    /*
    Nested Loops

    Loops in loops.
    */

    // Outer loop
    for (int i = 1; i <= 2; ++i) {
        cout << "Outer: " << i << "\n"; // Executes 2 times
        // Inner loop
        for (int j = 1; j <= 3; ++j) {
            cout << " Inner: " << j << "\n"; // Executes 6 times (2 * 3)
        }
    }

    /*
    For each loop
    
    Cycle through an array.

    Syntax:
    for (type variableName : arrayName) {
        // code block to be executed
    }
    */

    int myNumbers[5] = {10, 20, 30, 40, 50};
    
    for (int i : myNumbers) {
        cout << i << "\n";
    }
   
    return 0;
}
