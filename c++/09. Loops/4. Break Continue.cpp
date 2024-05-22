#include <iostream>

using namespace std;

int main() {
    /*
    You have already seen the break statement used in an earlier chapter of this tutorial. 
    It was used to "jump out" of a switch statement.

    The break statement can also be used to jump out of a loop.

    This example jumps out of the loop when i is equal to 4:

    Example:
    */

    for (int i = 0; i < 10; i++) {
        if (i == 4) {
            cout << "i == 4!!" << "\n";
            break;
        }
        cout << "i is currently: " << i << "\n";
    }

    cout << "\n\n\n"; // newline generator

    /*
    The continue statement breaks one iteration (in the loop), 
    if a specified condition occurs, and continues with the next iteration in the loop.

    This example skips the value of 4:
    */

    for (int i = 0; i < 10; i++) {
        if (i == 4) {
            continue;
        }
        cout << "i is currently: " << i << "\n";
    }

    cout << "\n\n\n";

    // While Loops

    /*
    Break and Continue in While Loop
    You can also use break and continue in while loops:
    */

    int i = 0;

    while (i < 10) {
        i++;
        if (i == 4) {
            cout << "Breaking" << "\n";
            break;
        }
        cout << i << "\n";
    }

    cout << "\n\n\n";

    /*
    The continue statement breaks one iteration (in the loop), if a specified condition occurs, 
    and continues with the next iteration in the loop.

    This example skips the value of 4:
    */

    i = 0;

    while (i < 10) {
        i++;
        if (i == 4) {
            cout << "Continuing" << "\n";
            continue;
        }
        cout << i << "\n";
    }

    return 0;
}
