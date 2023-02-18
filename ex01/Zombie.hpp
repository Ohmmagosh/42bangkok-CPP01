/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 21:34:30 by psuanpro          #+#    #+#             */
/*   Updated: 2023/02/19 00:56:56 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie {
	private:
		std::string	_name;
	public:
		Zombie(std::string name = "Zombie");
		~Zombie();
		void announce( void );
};

Zombie* zombieHorde( int N, std::string name = "Zombie" );


#endif
