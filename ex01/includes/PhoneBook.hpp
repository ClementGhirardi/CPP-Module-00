#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <sstream>
# include "Contact.hpp"

class PhoneBook
{
	public:

		PhoneBook(void);
		~PhoneBook(void);

		void	setContact(void);
		void	displayPhonebook(void) const;

	private:

		Contact	_contacts[8];
		int		_totalNbContacts;

};

#endif