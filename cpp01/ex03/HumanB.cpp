/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuro <kuro@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 15:58:38 by kuro              #+#    #+#             */
/*   Updated: 2024/01/05 16:40:44 by kuro             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	std::cout << CYN <<"CONSTRUCTOR " << name << " CALLED" << RST << std::endl;
	this->name = name;
}

void HumanB::setWeapon(std::string weapon)
{
	this->weapon.setType(weapon);
	return ;
}

void HumanB::attack(void)
{
	std::cout << BGRN << this->name << " attacks with their " << this->weapon.getType() << RST << std::endl;
}

HumanB::~HumanB()
{
	std::cout << CYN << "DESTRUCTOR " << this->name << " CALLED" << RST << std::endl;
}
