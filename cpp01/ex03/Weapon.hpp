/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuro <kuro@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 15:23:30 by kuro              #+#    #+#             */
/*   Updated: 2024/01/05 16:38:13 by kuro             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>
#include <string>

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

class Weapon
{
private:
	std::string type;
public:
	Weapon(void);
	Weapon(std::string weapon);
	~Weapon( void );

	void 			setType(std::string nType);
	std::string&	getType( void );
};

#endif
