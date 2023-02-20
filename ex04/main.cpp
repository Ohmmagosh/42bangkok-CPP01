/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 16:50:07 by psuanpro          #+#    #+#             */
/*   Updated: 2023/02/19 23:10:02 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

void	process(std::string file, std::string s1, std::string s2){
	Sed	sed(file, s1, s2);

	if (!sed.setResult()){
		std::cout << "create file error" << std::endl;
	}
}

int	main(int ac, char **av)
{
	if (ac == 4){
		if (!av[1] || !av[2] || !av[3]){
			std::cout << "wrong argument" << std::endl;
			return 0;
		}
		process(av[1], av[2], av[3]);
	}else
		std::cout << std::endl;
}
