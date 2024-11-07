#include "Array.hpp"

int main() {
	try {
	Array<int> intArray(5);
	Array<std::string> stringArray(5);

	for (unsigned int i = 0; i < intArray.size(); i++)
		intArray[i] = i + 1;
	for (unsigned int i = 0; i < stringArray.size(); i++)
		stringArray[i] = std::to_string(i + 1);

	for (unsigned int i = 0; i < intArray.size(); i++)
		std::cout << intArray[i] << std::endl;
	for (unsigned int i = 0; i < stringArray.size(); i++)
		std::cout << stringArray[i] << std::endl;

	std::cout << intArray.size() << std::endl;
	std::cout << intArray[6] << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}