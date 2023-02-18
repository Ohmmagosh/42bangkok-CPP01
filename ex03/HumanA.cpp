/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 01:47:19 by psuanpro          #+#    #+#             */
/*   Updated: 2023/02/19 02:52:39 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon weapon): _name(name) ,_weapon(weapon){
	std::cout << "humanA create" << this->_name << std::endl;
}

HumanA::~HumanA(void){
	std::cout << "humanA destroy" << this->_name << std::endl;
}

void HumanA::attack(){
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() <<std::endl;
}

