/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 23:17:23 by psuanpro          #+#    #+#             */
/*   Updated: 2023/02/20 08:00:39 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void){
	Harl	hello;

	hello.complain("DEBUG");
	hello.complain("INFO");
	hello.complain("WARNING");
	hello.complain("ERROR");
	return (0);
}
