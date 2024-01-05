/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuro <kuro@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 15:50:27 by kuro              #+#    #+#             */
/*   Updated: 2024/01/05 16:40:28 by kuro             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon weapon)
{
	std::cout << CYN << "CONSTRUCTOR " << name << " CALLED" << RST << std::endl;
	this->name = name;
	this->weapon = weapon;
}

void HumanA::attack(void)
{
	std::cout << BGRN << this->name << " attacks with their " << this->weapon.getType() << RST << std::endl;
}

HumanA::~HumanA(void)
{
	std::cout << CYN << "DESTRUCTOR " << this->name << " CALLED" << RST << std::endl;
}
