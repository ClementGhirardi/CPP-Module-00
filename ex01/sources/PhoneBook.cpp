/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clement-ghirardi <clement-ghirardi@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/31 14:51:46 by clement-ghi       #+#    #+#             */
/*   Updated: 2026/08/03 20:12:23 by clement-ghi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	_totalNbContacts = 0;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

void	PhoneBook::setContact(void)
{
	if (this->_totalNbContacts < 8)
	{
		this->_contacts[_totalNbContacts].setContact();
		this->_totalNbContacts++;
	}
	else
	{
		for (int i = 0; i < 7; i++)
			this->_contacts[i] = this->_contacts[i + 1];
		this->_contacts[this->_totalNbContacts].setContact();
	}
}


void	PhoneBook::displayPhonebook(void) const
{
	std::string	input;
	int			index;

	for (int i = 0; i < this->_totalNbContacts; i++)
	{
		this->_contacts[i].displayShortContact(i);
	}

	std::cout << "Index: ";
	if (std::getline(std::cin, input))
	{
		std::cout << input << std::endl;
		if (std::cin.eof() == true)
		{
			std::cout << "EOF reached" << std::endl << "Exiting" << std::endl;
			std::exit(0);
		}
		else if (input.length() == 1
			&& 0 <= input.compare("0") && input.compare("7") <= 0)
		{
			std::stringstream ss(input);
			ss >> index;
			if (ss.fail())
				std::cout << "Error during conversion" << input << std::endl;
			else if (index < this->_totalNbContacts)
				this->_contacts[index].displayFullContact();
			else
				std::cout << "Could not find index" << input << std::endl;
		}
		else
			std::cout << "Could not find index" << input << std::endl;
	}
}