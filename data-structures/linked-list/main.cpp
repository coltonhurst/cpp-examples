#include <iostream>
#include "linked-list.hpp"

int main()
{
    LinkedList list;
    list.Add(5);
    list.Add(8);

    std::cout << list.GetFirst() << std::endl;
    std::cout << list.GetLast() << std::endl;
}