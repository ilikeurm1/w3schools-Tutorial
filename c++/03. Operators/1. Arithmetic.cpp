#include <iostream>

using namespace std;

int main() {
    /*
    Operators are used to perform operations on variables and values.

    In the example below, we use the + operator to add together two values:
    */
    int x = 100 + 50;

    /*
    Although the + operator is often used to add together two values, like in the example above, 
    it can also be used to add together a variable and a value, or a variable and another variable:
    */
    int sum1 = 100 + 50;        // 150 (100 + 50)
    int sum2 = sum1 + 250;      // 400 (150 + 250)
    int sum3 = sum2 + sum2;     // 800 (400 + 400)

    /*
    C++ divides the operators into the following groups:
    
    Arithmetic operators: Used to perform common mathematical operations.
    Assignment operators
    Comparison operators
    Logical operators
    Bitwise operators

    Operator	Name	        Description	                            Example
    +	        Addition	    Adds together two values	            x + y
    -	        Subtraction	    Subtracts one value from another	    x - y
    *	        Multiplication	Multiplies two values	                x * y
    /	        Division	    Divides one value by another	        x / y
    %	        Modulus	        Returns the division remainder	        x % y
    ++	        Increment	    Increases the value of a variable by 1	++x
    --	        Decrement	    Decreases the value of a variable by 1	--x
    */
    return 0;
}
