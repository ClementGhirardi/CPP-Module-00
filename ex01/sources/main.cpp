/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clement-ghirardi <clement-ghirardi@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 14:48:59 by clement-ghi       #+#    #+#             */
/*   Updated: 2026/08/03 20:12:18 by clement-ghi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

int	main(void)
{
	PhoneBook	phonebook;
	std::string	input;

	std::cout << "Please enter ADD, SEARCH or EXIT to use the phonebook"
		<< std::endl;
	while (true)
	{
		std::cout << ">";
		std::getline(std::cin, input);
		if (std::cin.eof() == true)
		{
			std::cout << "EOF reached" << std::endl << "Exiting" << std::endl;
			std::exit(0);
		}
		else if (input.compare("ADD") == 0)
		{
			std::cout << "Enter information of the new contact" << std::endl;
			phonebook.setContact();
		}
		else if (input.compare("SEARCH") == 0)
		{
			std::cout << "Current contacts" << std::endl;
			phonebook.displayPhonebook();
		}
		else if (input.compare("EXIT") == 0)
			exit(0);
		input.clear();
	}
	return (0);
}