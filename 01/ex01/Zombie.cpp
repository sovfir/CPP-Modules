#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Constructor Called" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "The Zombie " << this->_Name << " Has Destructor" << std::endl;
}

std::string	Zombie::getname()
{
	return (this->_Name);
}

void	Zombie::setname(std::string Name)
{
	this->_Name = Name;
}

void	Zombie::announce( void )
{
	std::cout << this->_Name << ":" << " BraiiiiiiinnnzzzZ..." << std::endl;
}