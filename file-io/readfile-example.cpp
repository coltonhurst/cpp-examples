#include <iostream>
#include <fstream>

int main()
{
	std::string line;
	std::ifstream myFile;
	myFile.open("example.txt");

	if (myFile.is_open()) {
		while (getline(myFile, line)) {
			std::cout << line << std::endl;
		}
	} else {
		std::cout << "Unable to open the file." << std::endl;
	}
	
	myFile.close();

	return 0;
}