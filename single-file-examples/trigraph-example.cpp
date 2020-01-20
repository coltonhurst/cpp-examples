/*
	An example of trigraphs.
	A trigraph is a 3 character sequence that represents
	another single character. It always starts with two
	question marks.

	??= becomes #, so below, the ??=include becomes #include

	Please note that by default your compiler may have this
	feature disabled.
	On OS X, g++ doesn't recognize the trigraphs by default, but compiling
	with clang++ does.
*/

??=include <iostream>

int main()
{
	std::cout << "??=" << std::endl;
	std::cout << "??'" << std::endl;
	return 0;
}
