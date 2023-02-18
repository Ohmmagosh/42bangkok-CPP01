/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 01:47:32 by psuanpro          #+#    #+#             */
/*   Updated: 2023/02/19 02:48:51 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string weapon): _type(weapon){}

Weapon::~Weapon(){
	return ;
}

const std::string& Weapon::getType() const{
	return (this->_type);
}

void	Weapon::setType(std::string type){
	this->_type = type;
}


