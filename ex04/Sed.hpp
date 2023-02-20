/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 17:08:45 by psuanpro          #+#    #+#             */
/*   Updated: 2023/02/19 21:58:38 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP

# include <iostream>
# include <fstream>
# include <sstream>

class Sed {
	private:
		std::ifstream	_fd;
		std::ofstream	_result;
		std::string		_filename;
		std::string		_s1;
		std::string		_s2;
		std::string		_buff;
	public:
		Sed(std::string file, std::string s1, std::string s2);
		~Sed();
		void	setFd(void);
		void	getFilename(void);
		bool	setResult(void);
		void	setBuff(void);
};

#endif
