/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 23:39:04 by psuanpro          #+#    #+#             */
/*   Updated: 2023/02/19 01:47:16 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *strPtr = &str;
	std::string &strRef = str;

	std::cout << "The memory address of the string variable. "<< &str << std::endl;
	std::cout << "The memory address held by stringPTR. "<< strPtr << std::endl;
	std::cout << "The memory address held by stringREF. "<< &strRef << std::endl;

	std::cout << "The value of the string variable. " << str << std::endl;
	std::cout << "The value pointed to by stringPTR. " << *strPtr << std::endl;
	std::cout << "The value pointed to by stringREF. " << strRef << std::endl;

	return 0;
}
