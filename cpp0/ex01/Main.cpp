/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 13:33:29 by smlamali          #+#    #+#             */
/*   Updated: 2023/12/28 17:58:35 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Contact.hpp"
#include "PhoneBookClass.hpp"

int	main(void)
{
	int			i = 0;
	string		str = "";
	PhoneBook	phone;

	while (str.compare("EXIT") != 0)
	{
		std::cout << BGRN << "> ADD SEARCH or EXIT ?" << RST << std::endl;
		std::cin >> str;
		if (str.compare("ADD") == 0)
		{
			std::cout << BGRN << "> you selected ADD " << RST << std::endl;
			createContact(&phone, i);
			i++;
		}
		else if (str.compare("SEARCH") == 0)
		{
			std::cout <<  BGRN << "> you selected SEARCH " << RST << std::endl;
			searchContact(&phone);
		}
		else if (str.compare("EXIT") == 0)
			std::cout <<  BGRN << "> you selected EXIT.. BYE !!! o/ " << RST << std::endl;
		else
			std::cout <<  BGRN << "> please try again (= w =) " << RST << std::endl;
	}
	return 0;
}