/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clement-ghirardi <clement-ghirardi@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 16:05:40 by clement-ghi       #+#    #+#             */
/*   Updated: 2026/08/08 16:06:45 by clement-ghi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>

void	write_upper(const std::string str)
{
	size_t i;

	i = 0;
	while (i < str.length())
	{
		std::cout << (char)toupper(str[i]);
		i++;
	}
}

int main(int ac, char **av)
{
	int	id_word;

	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	id_word = 1;
	while (id_word < ac)
		write_upper(av[id_word++]);
	std::cout << std::endl;
    return (0);
}
