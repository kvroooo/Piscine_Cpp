/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 13:33:29 by smlamali          #+#    #+#             */
/*   Updated: 2023/12/26 16:29:05 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Contact.hpp"
#include "PhoneBookClass.hpp"

int	main(void)
{
	PhoneBook	instance; // fait appel au constructeur
	Contact		sam;

	sam.setFirstName("Samira");
	std::cout << "Hello " << sam.getFirstName() << std::endl; 
	
	return 0;
}