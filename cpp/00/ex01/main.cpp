/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergejmartov <sergejmartov@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 21:53:35 by sergejmarto       #+#    #+#             */
/*   Updated: 2022/06/24 21:21:57 by sergejmarto      ###   ########.fr       */
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