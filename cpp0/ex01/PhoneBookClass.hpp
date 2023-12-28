/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBookClass.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 13:31:21 by smlamali          #+#    #+#             */
/*   Updated: 2023/12/28 17:45:01 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PHONE_BOOK_CLASS_H
# define PHONE_BOOK_CLASS_H

#include "Contact.hpp"

//Regular bold text
#define BRED "\e[1;31m"
#define BGRN "\e[1;32m"
#define BCYN "\e[1;36m"
#define BWHT "\e[1;37m"

//Regular text
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define CYN "\e[0;36m"
#define WHT "\e[0;37m"

//Reset
#define RST "\e[0m"

// declaration de classe PhoneBook
class	PhoneBook
{
public:
	Contact	contacts[8]; //attribut membre
	int	n_contact;		//nb contacts in contacts[]

	PhoneBook(void); //constructeur
	~PhoneBook(void); //desctructeur (~)

	void	addContact(Contact new_contact, int i); //fonction membre
};

string	truncks(string str);
string	get_line(string object);
void	searchContact(PhoneBook *phone);
void	createContact(PhoneBook *phone, int i);


# endif