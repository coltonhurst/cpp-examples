/*
	An example of a reference parameter.
	Passes the memory location so the same loc in memory
	is changed, unlike a copy when passing by val.
*/

#include <iostream>

void addFive(int& num);

int main()
{
	int number = 3;

	std::cout << "The number is " << number << std::endl;
	addFive(number);
	std::cout << "Now the number is " << number << std::endl;

	return 0;
}

void addFive(int& num) {
	num += 5;
}