/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 00:42:42 by psuanpro          #+#    #+#             */
/*   Updated: 2023/02/20 08:46:48 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <_ctype.h>
#include <cctype>

void	process(std::string level){

	Harl	harl;

	std::string array[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int j = -1;
	for (int i = 1; i <= 4; i++){
		if (array[i - 1] == level){
			j = i;
			break ;
		}
	}
	harl.harlFilter(j);
}

int main(int ac , char **av)
{
	if (ac == 2){
		process(av[1]);
	} else
		std::cout << std::endl;
}
