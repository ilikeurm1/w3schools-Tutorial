#include <iostream>
#include <string>

using namespace std;

int main() {
    // To get the length of a string, use the length() function:

    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "The length of the txt string is: " << txt.length() << "\n";

    /*
    Tip: You might see some C++ programs that use the size() function to get the length of a string. 
    This is just an alias of length(). 
    It is completely up to you if you want to use length() or size():
    */

    string txt2 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "The length of the txt2 string is: " << txt2.size() << "\n";

    return 0;
}
