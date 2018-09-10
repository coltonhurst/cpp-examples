/*
    An example of C style strings and an example in C++.
*/

#include <iostream>

using namespace std;

int main()
{
  char greeting[8] = {'H', 'e', 'y', ' ', 'b', 'r', 'o', '\0'};
  
  cout << "Message: ";
  cout << greeting << endl;
  
  return 0;
}
