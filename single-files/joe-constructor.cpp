/*
	The code below is a simple example of constructors.
	We have the default constructor, which sets a Joe objects age to -1.
	We have an overloaded constructor, which takes an int 'newAge' and
	sets the Joe objects age to that value. The Joe object also has a
	getJoesAge() method, which returns the Joe object's age.
*/

#include <iostream>

// Class definition
class Joe
{
public:
	Joe();
	Joe(int newAge);
	int getJoesAge() const;
private:
	int age;
};

// Class implementation
Joe::Joe() {
	age = -1;
}

Joe::Joe(int newAge) {
	age = newAge;
}

int Joe::getJoesAge() const {
	return age;
}

// The main
int main()
{
	Joe joey;
	Joe joey2(2);
	std::cout << joey.getJoesAge() << std::endl;
	std::cout << joey2.getJoesAge() << std::endl;
	return 0;
}
