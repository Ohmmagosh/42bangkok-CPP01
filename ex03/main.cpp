/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 01:47:29 by psuanpro          #+#    #+#             */
/*   Updated: 2023/02/19 02:54:53 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main()
{
	{
		Weapon club = Weapon("Bong spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("Bong spiked club upgrade");
		bob.attack();
	}
	{
		Weapon club = Weapon("Bong thong");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("Bong thong upgrade");
		jim.attack();
	}
	return 0;
}
