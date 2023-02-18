/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 01:47:35 by psuanpro          #+#    #+#             */
/*   Updated: 2023/02/19 02:11:06 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon {
	private:
		std::string	_type;
	public:
		Weapon(std::string weapon);
		~Weapon();
		const std::string&	getType() const;
		void	setType(std::string type);
};

#endif
