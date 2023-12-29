/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 14:27:18 by smlamali          #+#    #+#             */
/*   Updated: 2023/12/29 18:44:35 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include <string>


class Contact
{
public:	

	std::string	f_name;
	std::string	l_name;
	std::string	secret;
	std::string	surname;
	std::string	number;

	Contact(void);
	~Contact(void);
	
	void	setContact(std::string fname, std::string lname, std::string secret,
			std::string surname, std::string number);
};

#endif

	// string	getFirstName( void ) const;
	// string	getLastName( void ) const;
	// string	getSurname( void ) const;
	// string	getNumber( void) const;
	// string	getSecret( void ) const;
	// void	getContact( void) const;

	// void	setFirstName(string str); 
	// void	setLastName(string str); 
	// void	setSurname(string str); 
	// void	setNumber(string str); 
	// void	setSecret(string str); 