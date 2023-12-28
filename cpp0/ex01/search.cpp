/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 16:08:01 by smlamali          #+#    #+#             */
/*   Updated: 2023/12/28 19:00:10 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <string>
#include "PhoneBookClass.hpp"

string	truncks(string str)
{
	unsigned sz = str.size() + (10 - str.size());

	if (str.length() > 10)
	{
		str.resize(9);
		str.push_back('.');
		return str;
	}
	else
		str.resize(sz, ' ');
	return str;
}

void	searchContact(PhoneBook *phone)
{
	int 	i = 0;

	while (i < phone->n_contact)
	{
 		string pi = "pi is " + to_string(3.1415926);
		std::cout << "pi : " << pi << std::endl;
		std::cout << i << "|" << truncks(phone->contacts[i].f_name) << "|"
		<< truncks(phone->contacts[i].l_name) << "|" << truncks(phone->contacts[i].surname) << std::endl;
		i++;
	}
	return ;
}
