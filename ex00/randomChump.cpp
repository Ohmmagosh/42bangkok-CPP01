/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 21:33:28 by psuanpro          #+#    #+#             */
/*   Updated: 2023/02/18 22:26:10 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string name);

void randomChump(std::string name ){
	Zombie	*new_zombie;

	new_zombie = newZombie(name);
	new_zombie->announce();
	delete new_zombie;
}
