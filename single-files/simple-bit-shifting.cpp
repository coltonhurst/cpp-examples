/*
	A simple example of bit shifting.
*/

#include <iostream>

int main() {

	int number = 4;
	number = number << 1;	// arithmetic shift left, multiplies by 2
	std::cout << number << std::endl;

	number = number >> 2;	// arithmetic shift right, divides by 4
	std::cout << number << std::endl;

	return 0;
}