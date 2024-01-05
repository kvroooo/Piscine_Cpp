/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuro <kuro@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 15:22:23 by kuro              #+#    #+#             */
/*   Updated: 2024/01/05 16:37:43 by kuro             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

#include <iostream>
#include <string>
#include "HumanA.hpp"

int main(void)
{
	Weapon	club = Weapon("club");
	HumanA	sam("Samira", club);
	sam.attack();
}