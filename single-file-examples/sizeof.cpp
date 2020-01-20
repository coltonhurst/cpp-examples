/*
	This demonstrates the use of the sizeof() operator.
	sizeof() returns the size of the type or object in bytes.
	The value that sizeof() returns is a compile time constant,
	so it's always determined before program execution.
*/

#include <iostream>

int main() {

	char letter = 'A';
	std::cout << sizeof(letter) << std::endl;

	int year = 2018;
	std::cout << sizeof(year) << std::endl;

	double pi = 3.14;
	std::cout << sizeof(pi) << std::endl;

	return 0;
}