/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBookClass.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 13:31:21 by smlamali          #+#    #+#             */
/*   Updated: 2023/12/26 16:20:58 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PHONE_BOOK_CLASS_H
# define PHONE_BOOK_CLASS_H

#include "Contact.hpp"
#include <string>

// declaration de classe PhoneBook
class	PhoneBook
{
public:
	Contact	*contacts;
	
	PhoneBook(void); //constructeur
	~PhoneBook(void); //desctructeur (~)

};

# endif