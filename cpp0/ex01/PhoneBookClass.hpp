/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBookClass.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 13:31:21 by smlamali          #+#    #+#             */
/*   Updated: 2023/12/29 15:59:04 by smlamali         ###   ########.fr       */
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
	int	oldest_c;
	PhoneBook(void); //constructeur
	~PhoneBook(void); //desctructeur (~)

	void	addContact(Contact new_contact, int i); //fonction membre
	void	searchContact( void );
	void	createContact(int i);
	std::string	truncks(std::string str);
	std::string	get_line(std::string object);
	std::string	itostr(int nbr);
	int		strtoi(std::string str);
};

# endif