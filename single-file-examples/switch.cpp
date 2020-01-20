/*
	An example of a switch statement in C++.

	Tells you how many eggs you have based on the int variable eggs.
	Only lets you know on 12, 6, 1, and 0.
*/

#include <iostream>

int main()
{
	int eggs = 12;

	switch(eggs)
	{
		case 0:
			std::cout << "No more eggs!";
			break;
		case 1:
			std::cout << "We only have one egg left!";
			break;
		case 6:
			std::cout << "We have half a dozen eggs left.";
			break;
		case 12:
			std::cout << "We just came from the store! We have a dozen eggs!";
			break;
		default:
			std::cout << "Where are the eggs?";
	}

	return 0;
}