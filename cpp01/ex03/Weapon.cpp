/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuro <kuro@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 15:22:56 by kuro              #+#    #+#             */
/*   Updated: 2024/01/05 16:34:45 by kuro             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{
	std::cout << "CONSTRUCTOR " << " CALLED" << std::endl;
}

Weapon::Weapon(std::string weapon)
{
	std::cout << "CONSTRUCTOR " << weapon << " CALLED" << std::endl;
	this->type = weapon;
}
std::string& Weapon::getType( void )
{
	std::string& strRef = this->type;
	return strRef;
}

void Weapon::setType(std::string nType)
{
	this->type = nType;
	return ;	
}

Weapon::~Weapon(void)
{
	std::cout << "DESTRUCTOR " << this->type << " CALLED" << std::endl;
}
