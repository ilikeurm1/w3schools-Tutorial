#include <iostream>
#include <string>

using namespace std;

/* Multiple Parameters
Inside the function, you can add as many parameters as you want:
*/

void myFunction(string fname, int age);

int main() {
    myFunction("Liam", 3);
    myFunction("Jenny", 14);
    myFunction("Anja", 30);

    /*
    Note that when you are working with multiple parameters,
    the function call must have the same number of arguments as there are parameters,
    and the arguments must be passed in the same order.
    */

    return 0;
}

void myFunction(string fname, int age) {
    cout << fname << " Cummer is " << age << " years old" << '\n';
}
