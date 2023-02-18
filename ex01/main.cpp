/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 21:35:03 by psuanpro          #+#    #+#             */
/*   Updated: 2023/02/19 00:57:44 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void){

	Zombie	*hello_zombie;

	hello_zombie = zombieHorde(8);

	for (int i = 0; i < 8; i++)
	{
		std::cout << i << " ";
		hello_zombie[i].announce();
	}

	delete [] hello_zombie;

	return (0);
}
