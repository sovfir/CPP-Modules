/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergejmartov <sergejmartov@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 20:34:04 by sergejmarto       #+#    #+#             */
/*   Updated: 2022/06/24 20:51:17 by sergejmarto      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Contact
{
private:
        int index;
        static std::string fields_name[11];
        std::string        informations[11];

        enum Field
        {
        FirstName = 0,
		LastName,
		Nickname,
		Login,
		Address,
		Email,
		Phone,
		Birthday,
		FavoriteMeal,
		UnderwearColor,
		Secret
        };
public:
        Contact();
        virtual ~Contact();
        bool set_informations(int index);
        void display_header(void);
        void display(void);
};

class Phonebook
{
    private:
            Contact contacts[8];
            int     amount;
    public:
            Phonebook();
            virtual ~Phonebook();
            void ft_start(void);
            void ft_addcontact(void);
            void ft_search(void);
            void ft_showheader(void);

};

#endif