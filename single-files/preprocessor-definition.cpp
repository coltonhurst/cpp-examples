/*
	In this example, we show how preprocessor define's are used.
	Wherever the preprocessor finds PI or APPLE it replaces its corresponding value.
	See lines 9 and 10 for the #define's.
*/

#include <iostream>

#define PI 3.1415
#define APPLES "apples"

int main()
{
	double radius = 6;
	std::cout << "We have a circle with a circumference of: " << 2 * PI * radius << std::endl;
	std::cout << "We also have 6 " << APPLES << "!" << std::endl;
	return 0;
}