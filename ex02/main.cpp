#include <iostream>
#include <string>

int main() {
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "Memory address of str : " << &str
	<< "\nMemory address held by stringPTR : " << stringPTR
	<< "\nMemory address held by stringREF : " << &stringREF
	<< "\n\nValue of str : " << str
	<< "\nValue pointed to by stringPTR : " << *stringPTR
	<< "\nValue pointed to by stringREF : " << stringREF;
	return 0;
}