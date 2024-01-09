/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 01:48:44 by kuro              #+#    #+#             */
/*   Updated: 2024/01/09 16:57:15 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	int		i = 0;
	Zombie	*horde = new Zombie[N];
	
	while (i < N)
	{
		horde[i] = Zombie(name);
		i++;
	}
	return horde;
}