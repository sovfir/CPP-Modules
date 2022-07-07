#include "Harl.hpp"

int main(int ac, char **av)
{
	Harl Harl;
	if (ac != 1)
		Harl.complain(av[1]);
	else
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}