#include <iostream>
#include <string>

using namespace std;

int main() {
    /*
    You can access the characters in a string by referring to its index number inside square brackets [].

    This example prints the first character in myString:
    */
    string myString = "Hello";
    cout << myString[0] << endl; // Outputs H

    /* Change String Characters
    To change the value of a specific character in a string, 
    refer to the index number, and use single quotes: 
    */
    myString[0] = 'J';
    cout << myString << endl; // Outputs Jello
    
}
