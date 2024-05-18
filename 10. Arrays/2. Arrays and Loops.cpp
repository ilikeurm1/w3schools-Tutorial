#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
	/*
	You can loop through the array elements with the for loop.

	The following example outputs all elements in the cars array:
	*/
	string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};
	for (int i = 0; i < 5; i++) {
		cout << cars[i] << "\n";
	}

	// This example outputs the index of each element together with its value:

	for (int i = 0; i < 5; i++) {
		cout << "Index " << i << " = " << cars[i] << "\n";
	}

	// And this example shows how to loop through an array of integers:
	int myNumbers[5] = {10, 20, 30, 40, 50};
	for (int i = 0; i < 5; i++) {
		cout << myNumbers[i] << "\n";
	}

	/* The foreach Loop
	There is also a "for-each loop" (introduced in C++ version 11 (2011),
	which is used exclusively to loop through elements in an array:

	Syntax:
	for (type variableName : arrayName) {
		Insert code lmao
	}

	The following example outputs all elements in an array, using a "for-each loop":
	*/

	int myNumbers[5] = {10, 20, 30, 40, 50};
	for (int i : myNumbers) {
		cout << i << "\n";
	}

	return 0;
}
