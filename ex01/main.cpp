#include "iter.hpp"
#include <iostream>

void printInt(int const &i) {
	std::cout << i << std::endl;
}

void printString(std::string const &s) {
	std::cout << s << std::endl;
}

int main() {
	int intArray[] = {1, 2, 3, 4, 5};
	std::string stringArray[] = {"one", "two", "three", "four", "five"};

	iter(intArray, 5, printInt);
	iter(stringArray, 5, printString);
	return 0;
}