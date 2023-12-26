/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 14:27:18 by smlamali          #+#    #+#             */
/*   Updated: 2023/12/26 16:28:53 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>
# include <string>

using namespace std;

class Contact
{
public:	
	Contact(void);
	~Contact(void);
	
	string	getFirstName( void ) const;
	void	setFirstName(string str);

private:
	string	f_name;
	// string	*l_name;
	// string	*secret;
	// string	*nickname;
	// string	*p_number;
};

#endif