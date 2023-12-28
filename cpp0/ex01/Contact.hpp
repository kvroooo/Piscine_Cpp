/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 14:27:18 by smlamali          #+#    #+#             */
/*   Updated: 2023/12/28 16:46:02 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include <string>

using namespace std; // TO DO : REMOVE ?

class Contact
{
public:	

	string	f_name;
	string	l_name;
	string	secret;
	string	surname;
	string	number;

	Contact(void);
	~Contact(void);
	
	void	setContact(string fname, string lname, string secret, string surname, string number);
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