#include <iostream>
#include <string>

using namespace std;

int main() {
    // It is possible to use the extraction operator >> on cin to store a string entered by a user:

    // string firstName;
    // cout << "Type your first name: ";
    // cin >> firstName; // John
    // cout << "Your name is: " << firstName; // Your name is: John

    /* Multiple words
    However, cin considers a space (whitespace, tabs, etc) as a terminating character, 
    which means that it can only store a single word (even if you type many words):
    */
    // string fullName;
    // cout << "Type your full name: ";
    // cin >> fullName; // Type your full name: John Doe
    // cout << "Your name is: " << fullName; // Your name is: John
    
    // FIX Use getline() function:
    string fullName;
    cout << "Type your full name: ";
    getline(cin, fullName); // John Doe
    cout << "Your name is: " << fullName; // Your name is: John Doe

    return 0;
}
