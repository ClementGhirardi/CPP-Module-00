/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clement-ghirardi <clement-ghirardi@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 14:02:29 by clement-ghi       #+#    #+#             */
/*   Updated: 2026/08/03 18:09:05 by clement-ghi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <iomanip>

class Contact
{
	public:

		Contact(void);
		~Contact(void);

		bool	setContact(void);
		void	displayShortContact(int index) const;
		void	displayFullContact(void) const;

	private:

		std::string _firstName;
		std::string _lastName;
		std::string _nickName;
		std::string _phoneNumber;
		std::string _darkestSecret;

};

#endif
