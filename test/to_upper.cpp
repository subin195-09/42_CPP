#include <iostream>

std::string	makeUpper(std::string cmd)
{
	std::string ret;
	int	i;
	
	i = -1;
	while (cmd[++i])
		ret.append(1, toupper(cmd[i]));
	return (ret);
}

int main(void)
{
	std::cout << makeUpper("add") << std::endl;
}