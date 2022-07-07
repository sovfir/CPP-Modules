#ifndef REPLACE_HPP
#define REPLACE_HPP
#include <iostream>
#include <fstream>
#include <string>

using std::fstream;

std::string ft_replace(std::string line, std::string what, std::string with);
int         ft_check_strings(std::string what, std::string with);

#endif