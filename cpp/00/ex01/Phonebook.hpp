/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjacinta <gjacinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 15:36:09 by gjacinta          #+#    #+#             */
/*   Updated: 2022/06/27 15:36:09 by gjacinta         ###   ########.fr       */
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