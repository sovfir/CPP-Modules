/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjacinta <gjacinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 15:35:54 by gjacinta          #+#    #+#             */
/*   Updated: 2022/06/27 15:35:54 by gjacinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int main(void)
{
    Phonebook phonebook;
    bool life;
    std::string command;

    phonebook.ft_start();
    life = true;
    while (life)
    {
        std::cout << ">";
        std::getline(std::cin, command);
        if (command == "ADD")
            phonebook.ft_addcontact();
        else if (command == "SEARCH")
            phonebook.ft_search();
        else if (command == "EXIT")
        {
            std::cout << "Farewell" << std::endl;
            life = false;
        }
    }
    return (0);
}