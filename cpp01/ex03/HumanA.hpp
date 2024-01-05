/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuro <kuro@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 15:50:39 by kuro              #+#    #+#             */
/*   Updated: 2024/01/05 16:36:24 by kuro             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A
# define HUMAN_A

#include "Weapon.hpp"

class HumanA
{
private:
	Weapon weapon;
	std::string name;
public:
	HumanA(std::string name, Weapon weapon);
	~HumanA();

	void attack(void);
};

#endif