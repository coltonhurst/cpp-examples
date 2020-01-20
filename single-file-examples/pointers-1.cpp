/*
	A simple example of pointers in C++.
*/

#include <iostream>

int main()
{
	int *aPointer;
	int number = 5;

	aPointer = &number;

	std::cout << "Number is: " << number << std::endl;

	*aPointer = 10;
	std::cout << "Number is now: " << number << std::endl;
	
	return 0;
}

/*
	Some notes...
	
	1) We declare a pointer with *
	2) You set the pointer equal to an address in memory
	  a) '&' is the address-of operator. '&number' returns the memory address where number is stored
	3) You can get the memory address of the pointer by getting it's value. You can get the value it's
	  pointing to by 'dereferencing' the pointer with '*'. You can also get the address of the pointer
	  itself with '&'.
	4) Cange the value of *pointerVarName, and you really change the value the pointer is pointing to.
*/