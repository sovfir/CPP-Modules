/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjacinta <gjacinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 15:35:02 by gjacinta          #+#    #+#             */
/*   Updated: 2022/06/27 15:35:02 by gjacinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c -= 32;
	}
	return (c);
}

int main(int argc, char **argv)
{
    if (argc > 1)
    {
        int x = 1;
        while (x < argc)
        {
            int j = 0;
            while (j < ft_strlen(argv[x]))
            {
                std::cout << ft_toupper(argv[x][j]);
                j++;
            }   
            std::cout << std::endl;
            x++;
        }
    }
    else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}


