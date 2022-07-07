#include "Zombie.hpp"

int main()
{
	Zombie *zom;
	std::string name;
	int nbr;

	std::cout << "Enter number of Zombies in your horde (int) : ";
	std::cin >> nbr;
	std::cin.ignore();
	if (std::cin.fail())
	{
		std::cout << "Wrong input!\n";
		return (1);
	}
	std::cout << "Name of your Zombies: ";
	getline(std::cin, name);
	zom = zombieHorde(nbr, name);
	delete [] zom;
	return (0);
}