/*
    A simple example of bit shifting.

    We start with 4, which in binary is: 0000 0100

    By shifting the bits left one place,
    we get: 0000 1000 (this is 8)

    Then, we shift the bits right TWO places!
    We had: 0000 1000

    After the two shifts right we have: 0000 0010
    This is 2!
*/

#include <iostream>

int main() {

	int number = 4;
	number = number << 1;	// 1 arithmetic shift left, multiplies by 2
	std::cout << number << std::endl;

	number = number >> 2;	// 2 arithmetic shifts right, divides by 4
	std::cout << number << std::endl;

	return 0;
}