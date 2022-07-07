# ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	private:
		std::string	_Name;
	public:
		Zombie();
		~Zombie();
		void			announce( void );
		std::string		getname();
		void			setname(std::string Name);
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif