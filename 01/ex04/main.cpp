#include "replace.hpp"

int main(int ac, char **av)
{
	std::string line;
	fstream f_in(av[1], fstream::in);
	if (ac != 4)
	{
		std::cout << "Wrong number of Args\n";
		return (1);
	}
	if (f_in.is_open())
	{
		std::string f_name(av[1]);
		if (ft_check_strings(av[2], av[3]))
			return (1);
		fstream f_out(f_name + ".replace", fstream::out);
		while (getline(f_in, line))
		{
			line = ft_replace(line, av[2], av[3]);
			f_out << line << std::endl;
		}
	}
	else
		std::cout << "Error in open file " << std::endl;
	return (0);
}