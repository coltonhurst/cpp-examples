/*
	An example using std::cin to take in input.
	Then, it says hello!
*/

#include <iostream>
#include <string>

int main() {
	
	std::string name = "";

	std::cout << "Please enter your name: ";
	std::cin >> name;

	std::cout << "Hello " << name << "!" << std::endl;

	return 0;
}
