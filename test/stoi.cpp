#include <iostream>

int main(void)
{
	std::string test = "3/0";
	size_t	idx = 0;

	std::cout << HUGE_VALF << std::endl;
	std::cout << std::numeric_limits<float>::min() << std::endl;
	return (0);
}
