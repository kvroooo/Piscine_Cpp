/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuro <kuro@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 01:20:28 by kuro              #+#    #+#             */
/*   Updated: 2024/01/04 01:33:34 by kuro             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout << "Constructor called" <<std::endl;
}

Zombie::Zombie(std::string name)
{
	std::cout << CYN << "CONSTRUCTOR ZOMBIE CALLED" << RST << std::endl;
	this->name = name;
}

void Zombie::announce( void ) const
{
	std::cout << BGRN << this->name << " : BraiiiiiiinnnzzzZ..." << RST << std::endl;
}

Zombie::~Zombie( void )
{
	std::cout << CYN << "DESTRUCTOR "<< this->name << " CALLED" << RST << std::endl;
}