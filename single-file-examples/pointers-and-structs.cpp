// A small example of pointers and structs.
// Lots of comments...

// Include the iostream file, allowing us to do
// input and output.
#include <iostream>

// Our node type. Has a char member called data,
// and a node pointer member called next. 'next' can point
// to another node type.
struct node {
  char data;
  node* next;
};

// The main function, where program execution starts
int main()
{
  // greet the user with "Hello"
  std::cout << "Hello" << std::endl << std::endl;

  // make a node named n
  node n;

  // set n's data char to be 'C'
  n.data = 'C';
  // set n's next node pointer to be empty,
  // so we aren't pointing to a random location
  n.next = nullptr;

  // we create a node pointer named head
  node* head;
  // we set head equal to the address of n,
  // so head points to n
  head = &n;

  // print out the char in n.data
  std::cout << "n.data = " << n.data << std::endl;

  // print out the location where n.next is pointing to
  std::cout << "n.next = " << n.next << std::endl << std::endl;

  // print out the value of head. This is the location head
  // is pointing to, which is the location of n
  std::cout << "head = " << head << std::endl;

  // Get the value at where head is pointing. This is n, our struct.
  // Then, get the char value that's stored in the data member of n.
  std::cout << "(*head).data = " << (*head).data << std::endl;

  // Just like above, we get the value of where head is pointing,
  // which is n, our node type. Then, we get the value of what's 
  // stored in next, the node pointer in n.
  // However, we can get this more concisely by using the arrow -> operator.
  // x->y (x is the pointer to a struct, and y is the data member.)
  // It gets the value of the specified struct member that the struct pointer is pointing to.
  std::cout << "head->next = " << head->next << std::endl;

  // return 0 to the operating system, to show the program execution and completion was successful.
  return 0;
}