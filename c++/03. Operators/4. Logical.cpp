#include <iostream>

using namespace std;

int main() {
    /*
    As with comparison operators, you can also test for true (1) or false (0) values with logical operators.

    Logical operators are used to determine the logic between variables or values:
    */
    int x = 5;
    int y = 3;
    cout << (x > 3 && x < 10); // returns 1 (true) because 5 is greater than 3 AND 5 is less than 10

    /*
    Operator	Name	        Description	                                                Example	
    && 	        Logical and	    Returns true if both statements are true	                x < 5 &&  x < 10 // returns true because both statements are true
    || 	        Logical or	    Returns true if one of the statements is true	            x < 5 || x < 4 // returns true because one of the statements is true
    !	        Logical not	    Reverse the result, returns false if the result is true	    !(x < 5 && x < 10) // returns false because ! (both of the statements are true)
    */

    return 0;
}
