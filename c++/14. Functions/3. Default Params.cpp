#include <iostream>
#include <string>

using namespace std;

/* Default Parameter Value
You can also use a default parameter value, by using the equals sign (=).

If we call the function without an argument, it uses the default value ("Norway"):
*/

void myFunction(string country = "Norway") {
  cout << country << "\n";
}

int main() {
	myFunction("Sweden");
	myFunction("USA");
	myFunction();
	myFunction("Belgium");	

	// Outputs: 
	// Sweden
	// USA
	// Norway
	// Belguim

	/* 
	A parameter with a default value, is often known as an "optional parameter". 
	From the example above, country is an optional parameter and "Norway" is the default value.
	*/

	return 0;
}
