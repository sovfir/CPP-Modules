/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjacinta <gjacinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 15:36:18 by gjacinta          #+#    #+#             */
/*   Updated: 2022/06/27 15:36:18 by gjacinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook()
{
    this->amount = 0;
}

Phonebook::~Phonebook()
{
}

void Phonebook::ft_start(void)
{
    std::cout << std::endl;
	std::cout << "██████╗ ██╗  ██╗ ██████╗ ███╗   ██╗███████╗██████╗  ██████╗  ██████╗ ██╗  ██╗" << std::endl;
	std::cout << "██╔══██╗██║  ██║██╔═══██╗████╗  ██║██╔════╝██╔══██╗██╔═══██╗██╔═══██╗██║ ██╔╝" << std::endl;
	std::cout << "██████╔╝███████║██║   ██║██╔██╗ ██║█████╗  ██████╔╝██║   ██║██║   ██║█████╔╝ " << std::endl;
	std::cout << "██╔═══╝ ██╔══██║██║   ██║██║╚██╗██║██╔══╝  ██╔══██╗██║   ██║██║   ██║██╔═██╗ " << std::endl;
	std::cout << "██║     ██║  ██║╚██████╔╝██║ ╚████║███████╗██████╔╝╚██████╔╝╚██████╔╝██║  ██╗" << std::endl;
	std::cout << "╚═╝     ╚═╝  ╚═╝ ╚═════╝ ╚═╝  ╚═══╝╚══════╝╚═════╝  ╚═════╝  ╚═════╝ ╚═╝  ╚═╝" << std::endl;
	std::cout << std::endl;
    std::cout << "GLOBAL BANKSTERS UNITED 1988" << std::endl;
	std::cout << "Welcome to your phonebook !\nPlease enter your command : " << std::endl;
	std::cout << " - ADD \n - SEARCH \n - EXIT \n" << std::endl;
}

void Phonebook::ft_addcontact(void)
{
    if (this->amount == 8)
        std::cout << "THIS DIRECTORY IS FULL!!" << std::endl;
    else if (this->contacts[this->amount].set_informations(this->amount + 1))
        this->amount++;
}

void Phonebook::ft_showheader(void)
{
    std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
    for (int i = 0; i < this->amount; i++)
        this->contacts[i].display_header();
    std::cout << "|-------------------------------------------|" << std::endl;
}

void Phonebook::ft_search(void)
{
    int index;
    if (this->amount == 0)
        std::cout << "YOU NEED TO ADD CONTACT BEFORE SEARCHING" << std::endl;
        else
        {
            this->ft_showheader();
            std::cout << "# Enter Index NUMER to display Informations or 0 to EXIT\n~";
            while (!(std::cin >> index) || (index < 0 || index > this->amount))
            {
                std::cin.clear();
			    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			    std::cout << "# Invalid Index\n~";
            }
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		    if (index > 0)
			    this->contacts[index - 1].display();
        }
}

std::string Contact::fields_name[11] = {
	"First Name",
	"Last Name",
	"Nickname",
	"Login",
	"Address",
	"E-mail",
	"Phone",
	"Birthday",
	"Favorite Meal",
	"Underwear Color",
	"Darkest Secret"
};

Contact::Contact()
{
    for (int i = FirstName; i <= Secret; i++)
        this->informations[i] = std::string();
}

Contact::~Contact()
{
}

bool Contact::set_informations(int index)
{
    this->index = index;
    for (int i = FirstName; i <=Secret; i++)
    {
        std::cout << "# " << Contact::fields_name[i] << ":\n+";
		std::getline(std::cin, this->informations[i]);
    }
    size_t totalLength = 0;
    for (int i = FirstName; i <= Secret; i++)
        totalLength += this->informations[i].length();
    if (totalLength == 0)
	{
		std::cout << "# Empty contact not added !" << std::endl;
		return (false);
	}
    std::cout << "# NEW Contact added !" << std::endl;
	return (true);
}

void Contact::display(void)
{
    std::cout << "# Contact [" << this->index << "]" << std::endl;
	for (int i = FirstName; i <= Secret; i++)
	{
		std::cout << Contact::fields_name[i] << ": ";
		std::cout << this->informations[i] << std::endl;
	}
}

void Contact::display_header()
{
    std::cout << "|" << std::setw(10) << this->index;
    for (int i = FirstName; i <= Nickname; i++)
    {
		std::cout << "|";
		if (this->informations[i].length() > 10)
			std::cout << this->informations[i].substr(0, 9) << ".";
		else
			std::cout << std::setw(10) << this->informations[i];
	}
	std::cout << "|" << std::endl;
}
