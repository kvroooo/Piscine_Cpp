/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuro <kuro@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 01:19:16 by kuro              #+#    #+#             */
/*   Updated: 2024/01/04 02:46:09 by kuro             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	// int		i = 0;
	// int		N = 3;
	Zombie	*kumacy;
	Zombie	*horde;
	
	std::cout << BRED << "*** NEW ZOMBIE ***" << RST <<std::endl;
	kumacy = newZombie("Kumacyyy !");
	kumacy->announce();
	delete kumacy;
	
	std::cout << BRED << "*** RANDOMCHUMP ***" << RST <<std::endl;
	randomChump("Ryuma");
	randomChump("Kuro");
	
	std::cout << BRED << "*** HORDE ***" << RST <<std::endl;
	horde = zombieHorde(3, "PURO");
	horde[0].announce();
	horde[1].announce();
	horde[2].announce();
	delete [] horde;
	return 0;
}