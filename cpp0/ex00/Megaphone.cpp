/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 16:26:42 by smlamali          #+#    #+#             */
/*   Updated: 2023/12/23 17:03:15 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

char	*ft_bigger(char *s)
{
	int	i;

	i = 0;
	if (!s || !s[i])
		return (0);
	while (s[i])
	{
		s[i] = std::toupper((unsigned char )s[i]);
		i++;
	}
	return (s);
}


int	main(int argc, char **argv)
{
	int	i = 1;
	
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		
		while (i < argc)
		{
			argv[i] = ft_bigger(argv[i]);
			std::cout << argv[i]; 
			i++;
		}
		std::cout << std::endl;
	}
	
	return 0;
}