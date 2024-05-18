#include <iostream>
using namespace std;

int main() {
    /*
    Numeric Types
    Use int when you need to store a whole number without decimals, like 35 or 1000, and float or double when you need a floating point number (with decimals), like 9.99 or 3.14515.
    */

    // int
    int MyNum = 1000;
    cout << MyNum;

    // float
    float MyNum = 5.75;
    cout << MyNum;

    // double
    double MyNum = 19.99;
    cout << MyNum;


    /*
    float vs. double

    The precision of a floating point value indicates how many digits the value can have after the decimal point. 
    The precision of float is only six or seven decimal digits, while double variables have a precision of about 15 digits. 
    Therefore it is safer to use double for most calculations.

    */

    /*
    Scientific Numbers
    A floating point number can also be a scientific number with an "e" to indicate the power of 10
    */

    float f1 = 35e3;
    double d1 = 12E4;
    cout << f1;
    cout << d1;

    return 0;
}

