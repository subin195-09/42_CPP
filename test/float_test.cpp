#include <iostream>
#include <iomanip>
#include <cmath>

int main(void)
{
	std::streamsize pre = std::cout.precision();

	// std::cout << std::setprecision(8);
	// std::cout.precision(8);
	std::cout << roundf(42.42f * (1 << 8)) / (1 << 8) << std::endl;
	std::cout << 1234.4321f << std::endl;
	// std::cout.unsetf(std::ios::fixed);
	// std::cout.precision(pre);

	std::cout << 42.42f << std::endl;
}
