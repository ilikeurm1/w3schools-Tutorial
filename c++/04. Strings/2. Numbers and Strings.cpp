#include <iostream>
#include <string>

using namespace std;

int main() {
    /*
    WARNING!

    C++ uses the + operator for both addition and concatenation.

    Numbers are added. Strings are concatenated.    
    

    If you add two numbers, the result will be a number:
    int x = 10;
    int y = 20;
    int z = x + y;      // z will be 30 (an integer)

    If you add two strings, the result will be a string concatenation:
    */

    string x = "10";
    string y = "20";
    string z = x + y;   // z will be 1020 (a string)

    // If you add a number and a string, the result is an error:
    // string x = "10";
    // int y = 20;
    // string z = x + y; // ERROR

    cout << z << "\n";

    return 0;
}
