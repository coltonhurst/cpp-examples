/*
	This is an example of constants in C++.
	To create a named constant, use the keyword 'const'.
	This is a memory location whose value is not allowed to change.
*/

#include <iostream>

const float GRAVITY = 9.807;	// this value can't change

int main()
{
	// GRAVITY = 5;
	// Uncommenting the above line would not allow you to compile the file. You can't change the constant GRAVITY!

	std::cout << "Gravitational acceleration on earth is " << GRAVITY << " m/(s^2).\nThis can never change!" << std::endl;
	return 0;
}