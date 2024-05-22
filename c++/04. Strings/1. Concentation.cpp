#include <iostream>
#include <string>

using namespace std;

int main() {
    // The + operator can be used between strings to add them together to make a new string. This is called concatenation:

    string first = "John";
    string last = "Doe";
    string full = first + last;

    cout << full << "\n";

    /*
    In the example above, there isn't a space between John and Doe (the ouput: JohnDoe). 
    However, you could add a space with quotes (" " or ' '):
    */

    char space = ' ';
    full = first + space + last;
    cout << full << "\n";

    /* APPEND
    A string in C++ is actually an object, 
    which contain functions that can perform certain operations on strings. 
    For example, you can also concatenate strings with the append() function:
    */

    first = "John"; 
    last = "Doe";
    full = first.append(space + last);
    
    cout << full << "\n";

    return 0;
}
