/*
You might see some C++ programs that runs without the standard namespace library. 
The using namespace std line can be omitted and replaced with the std keyword, followed by the :: operator for string (and cout) objects:
*/

#include <iostream>
#include <string>

int main() {
  std::string greeting = "Hello"; // Declaration

  std::cout << greeting; // Output
  
  return 0;
}
