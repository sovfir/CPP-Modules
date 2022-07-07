#include <iostream>
#include <fstream>
#include <string>

using std::fstream;

std::string ft_replace(std::string line, std::string what, std::string with)
{
	int start = line.find(what);
	if (start != -1)
	{
		line.erase(start, what.length());
		line.insert(start, with);
	}
	return (line);
}

int ft_check_strings(std::string what, std::string with)
{
	if (what.empty())
	{
		std::cout << "ERROR: s1 cant be empty!" << std::endl;
		return (1);
	}
	else if (with.empty())
	{
		std::cout << "ERROR: s2 cant be empty!" << std::endl;
		return (1);
	}
	return (0);
}