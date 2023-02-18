/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 01:47:24 by psuanpro          #+#    #+#             */
/*   Updated: 2023/02/19 02:53:13 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name){
	std::cout << "humanA create" << this->_name << std::endl;
}

HumanB::~HumanB(){
	std::cout << "humanA destroy" << this->_name << std::endl;
}

void	HumanB::attack(){
	std::cout << this->_name << " attacks with their " << this->_weapon->getType() <<std::endl;
}

void	HumanB::setWeapon(Weapon& weapon){
	this->_weapon = &weapon;
}

