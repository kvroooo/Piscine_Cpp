/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 01:19:16 by kuro              #+#    #+#             */
/*   Updated: 2024/01/09 16:54:13 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *kumacy;

	std::cout << BRED << "*** NEW ZOMBIE ***" << RST <<std::endl;
	kumacy = newZombie("Kumacyyy !");
	kumacy->announce();

	std::cout << std::endl << BRED << "*** RANDOMCHUMP ***" << RST << std::endl;
	randomChump("Ryuma");
	//Destructor Ryuma called at end of randomChump()
	std::cout << std::endl;
	kumacy->announce();
	delete kumacy;
	return 0;
}