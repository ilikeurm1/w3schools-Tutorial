#include <iostream>
#include <string>

using namespace std;

void myFunction(string fname); // function declaration

int main() {
    /* Parameters and Arguments
    Information can be passed to functions as a parameter. Parameters act as variables inside the function.

    Parameters are specified after the function name, inside the parentheses.
    You can add as many parameters as you want, just separate them with a comma:

    Syntax
    void functionName(parameter1, parameter2, parameter3) {
        // code to be executed
    }

    The following example has a function that takes a string called fname as parameter.
    When the function is called, we pass along a first name,
    which is used inside the function to print the full name:
    */

    myFunction("Liam");
    myFunction("Jenny");
    myFunction("Anja");

    return 0;
}

void myFunction(string fname) { // Function definition
    cout << fname << " Doe\n";
}
