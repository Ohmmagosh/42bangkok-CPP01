/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 21:35:03 by psuanpro          #+#    #+#             */
/*   Updated: 2023/02/18 22:25:14 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

void randomChump( std::string name );

int	main(void){

	Zombie	hello_zombie("zombie_1");

	hello_zombie.announce();
	randomChump("random_Zombie");

	return (0);
}
