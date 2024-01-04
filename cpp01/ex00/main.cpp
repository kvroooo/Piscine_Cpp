/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuro <kuro@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 01:19:16 by kuro              #+#    #+#             */
/*   Updated: 2024/01/04 01:41:52 by kuro             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *kumacy;

	std::cout << BRED << "*** NEW ZOMBIE ***" << RST <<std::endl;
	kumacy = newZombie("Kumacyyy !");
	kumacy->announce();
	kumacy->announce();
	kumacy->announce();
	std::cout << BRED << "*** RANDOMCHUMP ***" << RST <<std::endl;
	randomChump("Ryuma");
	randomChump("Kuro");
	delete kumacy;
	return 0;
}