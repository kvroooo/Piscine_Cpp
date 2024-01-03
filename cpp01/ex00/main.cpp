/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuro <kuro@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 01:19:16 by kuro              #+#    #+#             */
/*   Updated: 2024/01/03 03:29:37 by kuro             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *kumacy;
	
	kumacy = newZombie("Kumacyyy !");
	kumacy->announce();
	randomChump("Ryuma");
	delete kumacy;
	return 0;
}