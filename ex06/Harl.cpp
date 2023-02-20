/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 22:22:31 by psuanpro          #+#    #+#             */
/*   Updated: 2023/02/20 08:57:55 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <string>

Harl::Harl(){
	return ;
}

Harl::~Harl(){
	return ;
}

void	Harl::debug ( void ){
	std::cout << "[DEBUG]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
	std::cout << std::endl;
}

void	Harl::info ( void ){
	std::cout << "[INFO]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t putenough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
	std::cout << std::endl;
}

void	Harl::warning ( void ){
	std::cout << "[WARNING]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I've been coming for years whereas you started working here since last month." << std::endl;
	std::cout << std::endl;
}

void	Harl::error ( void ){
	std::cout << "[ERROR]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
	std::cout << std::endl;
}

void	Harl::complain(std::string level){
	void (Harl::*ptrFunc[4])(void)= {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	std::string array[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++){
		if (array[i] == level)
			(this->*ptrFunc[i])();
	}
}

void	Harl::harlFilter(int level){
	std::string array[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int	size = 4;

	if (level == -1){
		size = 5;
		level = 5;
	}
	for (int i = level; i <= size; i++){
		switch (i) {
		case 1:
			complain(array[0]);
			break ;
		case 2:
			complain(array[1]);
			break;
		case 3:
			complain(array[2]);
			break;
		case 4:
			complain(array[3]);
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
		}
	}
}
