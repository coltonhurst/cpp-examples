/*
	This is a simple example demonstrating how to use header files.
	In the 'header-example' folder, there are three files:
		- main.cpp	[ the main file to run, which calls add() ]
		- add.cpp	[ contains the implementation for add() ]
		- add.hpp	[ contains the func declaration for add() ]

	We #include the add.hpp file. When we compile this file, the contents of
	add.hpp are put where our #include is. This has the func declaration.
*/

#include <iostream>
#include "add.hpp"

int main()
{
	std::cout << "The sum of 6 and 8 is " << add(6, 8) << std::endl;
	return 0;
}