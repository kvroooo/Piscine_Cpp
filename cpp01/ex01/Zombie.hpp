/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuro <kuro@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 01:19:34 by kuro              #+#    #+#             */
/*   Updated: 2024/01/05 14:52:27 by kuro             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string> 
# include <iostream> 

//Regular bold text
#define BRED "\e[1;31m"
#define BGRN "\e[1;32m"
#define BCYN "\e[1;36m"
#define BWHT "\e[1;37m"

//Regular text
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define CYN "\e[0;36m"
#define WHT "\e[0;37m"

//Reset
#define RST "\e[0m"

class Zombie
{
private:
	std::string name;

public:
	
	Zombie(void);
	~Zombie(void);
	Zombie(std::string name);

	void	announce( void ) const;
};

void	randomChump(std::string name);
Zombie*	newZombie(std::string name);
Zombie* zombieHorde(int N, std::string name);

#endif