/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 13:33:29 by smlamali          #+#    #+#             */
/*   Updated: 2024/01/09 15:06:15 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBookClass.hpp"

int	main(void)
{
	int			i = 0;
	std::string		str = "";
	PhoneBook	phone;

	while (str.compare("EXIT") != 0)
	{
		std::cout << BGRN << "> ADD SEARCH or EXIT ?" << RST << std::endl;
		std::getline(std::cin, str);
		if (str.compare("ADD") == 0)
		{
			std::cout << BGRN << "> you selected ADD " << RST << std::endl;
			phone.createContact(i);
			i++;
		}
		else if (str.compare("SEARCH") == 0)
		{
			std::cout <<  BGRN << "> you selected SEARCH " << RST << std::endl;
			phone.searchContact();
		}
		else if (str.compare("EXIT") == 0)
			std::cout <<  BGRN << "> you selected EXIT.. BYE !!! o/ " << RST << std::endl;
		else
			std::cout <<  BGRN << "> please try again (= w =) " << RST << std::endl;
	}
	return 0;
}