/*
	An example of a class (within the same file).
	This example has lots of little examples inside, like 
	data and function members, access modifiers, an example of
	how we can define a function outside of a class, etc.
*/

#include <iostream>

class Box {
public:				// These 3 data members and 1 function member are all public
	double length;
	double width;
	double height;
	double getVolume(void) {				// We can declare & define the function here
		return length * width * height;
	}
	void setLength(double);			// We can declare our function & define it later
	void publicPrintInfo(void) {
		realPrintInfo();
	}
private:
	void realPrintInfo(void);
};

// We can also create a function definition outside the class
// Note- the function must be declared to do this!
void Box::setLength(double newLength) {
	length = newLength;
}

void Box::realPrintInfo(void) {
	std::cout << "Length: " << length << std::endl;
	std::cout << "Width: " << width << std::endl;
	std::cout << "Height: " << height << std::endl;
}

int main()
{
	// Create our box
	Box box1;
	box1.length = 5.0;
	box1.width = 6.0;
	box1.height = 7.0;

	// Use the public data members to calculate the volume
	double box1Volume = box1.length * box1.width * box1.height;
	std::cout << "The volume of Box 1 is: " << box1Volume << std::endl;

	// Use the public member function(s) to get the volume.
	std::cout << "The volume of Box 1 is: " << box1.getVolume() << std::endl;

	// We can use our function declared outside the class too!
	box1.setLength(100);
	std::cout << "Now the volume of Box 1 is: " << box1.getVolume() << std::endl;

	// Can we call the private function 'realPrintInfo'?
	// No! If we uncomment the line below, it won't compile.
	//box1.realPrintInfo();

	// We can call a public function that calls the private one though!
	box1.publicPrintInfo();

	return 0;
}