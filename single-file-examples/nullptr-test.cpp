// to compile: g++ -std=c++03 nullptr-test.cpp

#include <iostream>

int main()
{
  int *p = nullptr;

  std::cout << "p is pointing to: " << p << std::endl;

  return 0;
}

/*
Using nullptr, which was introduced in C++11, compiles and runs correctly with -std=c++98 or 03. How?

Today I learned... on OS X, compiling with g++ actually just uses clang, so using version flags like -std=c++98 means nothing.
I assumed that compiling with clang++ would use clang, and g++ would actually use g++, which I think is a reasonable assumption.
Anyway, mystery solved.
*/