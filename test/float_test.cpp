#include <iostream>
#include <iomanip>

int main(void)
{
	std::streamsize pre = std::cout.precision();

	// std::cout << std::setprecision(6);
	std::cout.precision(6);
	std::cout << 42.42f << std::endl;
	std::cout << 1234.4321f << std::endl;
	std::cout.unsetf(std::ios::fixed);
	std::cout.precision(pre);

	std::cout << 42.42f << std::endl;
}
