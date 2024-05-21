#include <iostream>
#include <string>

using namespace std;

// Example
void swapNums(int &x, int &y) {
  int z = x;
  x = y;
  y = z;
}

int main() {
	/* Pass By Reference
	In the examples from the previous page, we used normal variables when we passed parameters to a function. 
	You can also pass a reference [12. References] to the function. This can be useful when you need to change the value of the arguments:
	*/

	int firstNum = 10;
	int secondNum = 20;

	cout << "Before swap: " << "\n";
	cout << firstNum << secondNum << "\n\n";

	// Call the function, which will change the values of firstNum and secondNum
	swapNums(firstNum, secondNum);

	cout << "After swap: " << "\n";
	cout << firstNum << secondNum << "\n";

	/* Outputs
	Before swap:
	1020

	After swap:
	2010
	*/
	return 0;
}
