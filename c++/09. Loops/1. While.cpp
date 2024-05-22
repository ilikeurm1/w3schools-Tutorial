#include <iostream>

using namespace std;

int main() {
    /*
    The while loop loops through a block of code
    as long as a specified condition is true:

    while (condition) {
        // code block to be executed
    }
    
    In the example below, the code in the loop will run,
    over and over again, as long as a variable (i) is less than 5:
    */
    
    int i = 1, end = 10;

    end++; // plus 1 as the condition isnt inclusive
    while (i < end) { 
        cout << "I have ran a total of: " << i << '\n';
        i++;
    }

    return 0;
}
