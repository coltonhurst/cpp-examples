#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> list;   // create the int vector
    
    for (int i = 1; i <= 5; i++) {  // add items to 'list'
        list.push_back(i);
    }
    
    cout << "The contents of 'list' are: "; // print 'list'
    for (vector<int>::iterator i = list.begin(); i != list.end(); ++i) {
        cout << *i << " ";
    }
    
    cout << "\n";
    
    return 0;
}
