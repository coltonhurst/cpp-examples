/*
	An example of passing pointers to a function.
*/

#include <iostream>

void makeIntTen(int *);

int main()
{
	int *aPointer;
	int number = 5;

	aPointer = &number;

	std::cout << "Number is: " << number << std::endl;

	makeIntTen(aPointer);
	std::cout << "Number is now: " << number << std::endl;
	
	return 0;
}

void makeIntTen(int *num) {
	*num = 10;
}

/*
	Some notes...

	You pass the address of the variable to the function. Then, the formal parameter indicates with the *
	that it's a pointer variable. You can then change the vale that the pointer points to. You can see by
	running this file that the value of number is changed.
*/