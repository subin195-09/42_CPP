#include <string>
#include <iostream>

int main(void)
{
	std::string str = "here 123\n";

	std::cout << str.find("123") << std::endl;
	std::cout << str.substr(5, 2) << std::endl;
}