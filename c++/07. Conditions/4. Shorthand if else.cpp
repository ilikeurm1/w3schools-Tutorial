#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    /*
    There is also a short-hand if else, which is known as the ternary operator because it consists of three operands. 
    It can be used to replace multiple lines of code with a single line. 
    It is often used to replace simple if else statements:
    
    
    variable = (condition) ? expressionTrue : expressionFalse;
    */
    
    /*
    int time = 20;
    if (time < 18) {
    cout << "Good day.";
    } else {
    cout << "Good evening.";
    }

    example above can be written as:
    */
    int time = 20;
    string result = (time < 18) ? "Good day." : "Good evening.";
    cout << result << endl;
    return 0;
}
