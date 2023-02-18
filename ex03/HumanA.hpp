/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 01:47:22 by psuanpro          #+#    #+#             */
/*   Updated: 2023/02/19 02:46:17 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanA {
	private:
		Weapon		_weapon;
		std::string	_name;
	public:
		HumanA(std::string name, Weapon weapon);
		~HumanA(void);
		void	attack(void);
};

#endif
