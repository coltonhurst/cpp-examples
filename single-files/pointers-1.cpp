/*
	A simple example of pointers in C++.
*/

#include <iostream>

int main()
{
	int * aPointer;
	int number = 5;

	aPointer = &number;

	std::cout << "Number is: " << number << std::endl;

	*aPointer = 10;
	std::cout << "Number is now: " << number << std::endl;
	
	return 0;
}