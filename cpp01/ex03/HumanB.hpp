/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuro <kuro@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 15:58:52 by kuro              #+#    #+#             */
/*   Updated: 2024/01/05 16:15:34 by kuro             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanB
{
private:
	std::string name;
	Weapon weapon;
public:
	HumanB(std::string name);
	~HumanB();

	void	attack(void);
	void	setWeapon(std::string weapon);
};

#endif