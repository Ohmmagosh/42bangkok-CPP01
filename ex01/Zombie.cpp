/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 21:33:30 by psuanpro          #+#    #+#             */
/*   Updated: 2023/02/19 00:17:46 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name): _name(name){
	std::cout << this->_name << ": create"<< std::endl;
}

Zombie::~Zombie(){
	std::cout << this->_name << ": destroy" << std::endl;
}

void Zombie::announce( void ){
	 std::cout << this->_name << ":" << " BraiiiiiiinnnzzzZ..." << std::endl;
}
