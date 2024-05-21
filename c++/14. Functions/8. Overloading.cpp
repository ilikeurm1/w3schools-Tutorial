#include <iostream>
#include <string>

using namespace std;

// int plusFuncInt(int x, int y) {
// 	return x + y;
// }

// double plusFuncDouble(double x, double y) {
// 	return x + y;
// }

int plusFunc(int x, int y) {
  return x + y;
}

double plusFunc(double x, double y) {
  return x + y;
}


int main() {
	/* Function Overloading
	With function overloading, multiple functions can have the same name with different parameters:

	int myFunction(int x)
	float myFunction(float x)
	double myFunction(double x, double y)
	
	
	Consider the following example, which have two functions that add numbers of different type:
	*/

	// int myNum1 = plusFuncInt(8, 5);
	// double myNum2 = plusFuncDouble(4.3, 6.26);
	// cout << "Int: " << myNum1 << "\n";
	// cout << "Double: " << myNum2;

	/*
	Instead of defining two functions that should do the same thing, it is better to overload one.

	In the example below, we overload the plusFunc function to work for both int and double:
	*/

	int myNum1 = plusFunc(8, 5);
	double myNum2 = plusFunc(4.3, 6.26);
	cout << "Int: " << myNum1 << "\n";
	cout << "Double: " << myNum2;

	/* Note:
	Multiple functions can have the same name as long as the number and/or type of parameters are different.
	*/
	return 0;
}
