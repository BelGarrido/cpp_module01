#include <iostream>

int main(void){
	std::string str = "HI THIS IS BRAIN";
	// A pointer to variable stringSRT "stores the address of str"
	std::string *stringPTR = &str;
	// A reference (or alias) for str.
	std::string &stringREF = str;
	
	std::cout << "\033[36m" << "Memory address" << "\033[0m" << std::endl;
	std::cout << "str: " << &str << std::endl;
	std::cout << "stringPTR: " << &stringPTR << std::endl;
	std::cout << "stringREF: " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "\033[36m" << "Values" << "\033[0m" << std::endl;
	std::cout << "str: " << str << std::endl;
	std::cout << "stringPTR: " << stringPTR << std::endl;
	std::cout << "stringREF: " << stringREF << std::endl;
}
