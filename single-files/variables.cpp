/*
	You can create locations in memory that can be changed.
	You name these locations with a valid identifier.
	These are variables!
*/

#include <iostream>
#include <string>

int main()
{
	int pies = 5;
	int burgers = 3;
	std::string name = "Colton";

	std::cout << "My name is " << name << " and I just baked " << pies << " pies and grilled " << burgers << " burgers!" << std::endl;
	
	pies = 0;	// You can change variables during program execution
	std::cout << "Now I have " << pies << " pies! I guess someone ate them?" << std::endl;

	return 0;
}