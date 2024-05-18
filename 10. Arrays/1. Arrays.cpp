#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    /*
    Arrays are used to store multiple values in a single variable, 
    instead of declaring separate variables for each value.

    To declare an array, define the variable type, 
    specify the name of the array followed by square brackets and specify the number of elements it should store:
    */

    string cars[4];

    /*
    We have now declared a variable that holds an array of four strings. 
    To insert values to it, we can use an array literal - place the values in a comma-separated list, inside curly braces:
    */

    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};

    /*
    To create an array of three integers, you could write:
    */

    int myNum[3] = {10, 20, 30};

    /* Access the Elements of an Array
    You access an array element by referring to the index number inside square brackets [].

    This statement accesses the value of the first element in cars:
    */

    cout << cars[0]; // Volvo

    /* Change an Array Element
    To change the value of a specific element, refer to the index number:
    */
    cars[0] = "Opel";
    cout << cars[0]; // Now outputs Opel instead of Volvo



    return 0;
}