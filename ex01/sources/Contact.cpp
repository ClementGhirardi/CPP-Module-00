/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clement-ghirardi <clement-ghirardi@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 14:02:34 by clement-ghi       #+#    #+#             */
/*   Updated: 2026/08/03 20:12:19 by clement-ghi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

static void	set_information(const std::string field_name,
	std::string *field)
{
	std::cout << field_name;
	while (!std::getline(std::cin, *field)
		|| (*field).length() == 0)
	{
		if (std::cin.eof() == true)
		{
			std::cout << "EOF reached" << std::endl << "Exiting" << std::endl;
			std::exit(0);
		}
		else if ((*field).length() == 0)
		{
			(*field).clear();
			std::cout << "Contact can't have empty fields. Please try again"
				<< std::endl;
			std::cout << field_name;
		}
	}
}

bool	Contact::setContact(void)
{
	set_information("First name: ", &this->_firstName);
	set_information("Last name: ", &this->_lastName);
	set_information("Nickname: ", &this->_nickName);
	set_information("Phone number: ", &this->_phoneNumber);
	set_information("Darkest secret: ", &this->_darkestSecret);
	return (true);
}

static void	display_field(const std::string field)
{
	std::cout << "|";
	if (field.length() > 10)
		std::cout << field.substr(0, 9) << ".";
	else
		std::cout << std::setw(10) << field;
}

void	Contact::displayShortContact(int index) const
{
	std::cout << "|" << std::setw(10) << index;
	display_field(this->_firstName);
	display_field(this->_lastName);
	display_field(this->_nickName);
	std::cout << "|" << std::endl;
}

void	Contact::displayFullContact(void) const
{
	std::cout << "First name: " << this->_firstName << std::endl;
	std::cout << "Last name: " << this->_lastName << std::endl;
	std::cout << "Nickname: " << this->_nickName << std::endl;
	std::cout << "Phone number: " << this->_phoneNumber << std::endl;
	std::cout << "Darkest secret: " << this->_darkestSecret << std::endl;
}
