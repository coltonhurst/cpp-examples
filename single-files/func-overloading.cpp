/*
	An example of function overloading.
	When you have multiple functions with the
	same name but different parameters.
*/

#include <iostream>

int sum(int num);
int sum(int num1, int num2);
int sum(int num1, int num2, int num3);

int main()
{
	std::cout << "2 + nothing is: " << sum(2) << std::endl;
	std::cout << "2 + 5 is: " << sum(2, 5) << std::endl;
	std::cout << "2 + 5 + 3 is: " << sum(2, 5, 3) << std::endl;
	return 0;
}

int sum(int num) {
	return num;
}

int sum(int num1, int num2) {
	return num1 + num2;
}

int sum(int num1, int num2, int num3) {
	return num1 + num2 + num3;
}