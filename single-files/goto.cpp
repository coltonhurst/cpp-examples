/*
	An example of how to use 'goto', even though 'Thou shall not goto'.

	This program prints 'Hello' 2 times, then prints 'DONE'.

	You have a label for a line, and 'goto' that label. A label is a valid identifer followed by a colon :
*/

#include <iostream>

int main()
{
	int number = 98;

	mylabel: std::cout << "Hello\n";
	number++;

	if (number < 100)
		goto mylabel;

	std::cout << "DONE\n";

	return 0;
}