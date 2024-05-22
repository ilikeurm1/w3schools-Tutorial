#include <iostream>
#include <string>

using namespace std;

int main() {
    /* 
    In C++, you don't have to specify the size of the array. 
    The compiler is smart enough to determine the size of the array based on the number of inserted values:
    
    string cars[] = {"Volvo", "BMW", "Ford"}; // Three array elements
    // The example above is equal to:
    string cars[3] = {"Volvo", "BMW", "Ford"}; // Also three array elements    

    Omit Elements on Declaration
    It is also possible to declare an array without specifying the elements on declaration, and add them later:    
    */

    string cars[5];
    cars[0] = "Volvo";
    cars[1] = "BMW";
    // ...

    cout << cars << "\n";

    for (string i : cars) {
        cout << i << "\n";
    }

    return 0;
}
