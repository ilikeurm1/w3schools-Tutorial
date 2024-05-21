#include <iostream>
#include <string>

using namespace std;

// Create a function
void myFunction() {
	cout << "I just got executed!";
}

int main() {
	/*
	A function is a block of code which only runs when it is called.

	You can pass data, known as parameters, into a function.

	Functions are used to perform certain actions, and they are important for reusing code: Define the code once, and use it many times.


	Create a Function
	C++ provides some pre-defined functions, such as main(), which is used to execute code. 
	But you can also create your own functions to perform certain actions.

	To create (often referred to as declare) a function, specify the name of the function, followed by parentheses ():
	void myFunction() {
		// body a.k.a code to be executed
	}

	Example Explained
	myFunction() is the name of the function
	void means that the function does not have a return value. You will learn more about return values later in the next chapter
	inside the function (the body), add code that defines what the function should do
	
	
	Call a Function
	Declared functions are not executed immediately. 
	They are "saved for later use", and will be executed later, when they are called.

	To call a function, write the function's name followed by two parentheses () and a semicolon ;

	In the following example, myFunction() is used to print a text (the action), when it is called:	
	*/

	myFunction(); // call the function

	// Outputs "I just got executed!"

	
	// A function can be called multiple times:

	myFunction(); // call the function multiple times
	myFunction();
	myFunction();


	/*
	Function Declaration and Definition
	A C++ function consist of two parts:

	Declaration: the return type, the name of the function, and parameters (if any)
	Definition: the body of the function (code to be executed)

	void myFunction() { // declaration
		// the body of the function (definition)
	}
	

	it is possible to separate the declaration and the definition of the function - for code optimization.

	You will often see C++ programs that have function declaration above main(), and function definition below main(). 
	This will make the code better organized and easier to read:

	// Function declaration
	void myFunction();

	// The main method
	int main() {
		myFunction();  // call the function
		return 0;
	}

	// Function definition
	void myFunction() {
		cout << "I just got executed!";
	}
	*/

	return 0;
}
