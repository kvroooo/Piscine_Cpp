/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 14:27:18 by smlamali          #+#    #+#             */
/*   Updated: 2024/01/09 13:57:09 by smlamali         ###   ########.fr       */
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
