/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 17:11:59 by psuanpro          #+#    #+#             */
/*   Updated: 2023/02/19 21:57:20 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

Sed::Sed(std::string file, std::string s1, std::string s2): _filename(file) ,_s1(s1), _s2(s2) {
	this->_fd.open(file);
}

Sed::~Sed(){
	return ;
}

void	Sed::setFd(void){
	if (this->_fd.is_open())
	{
		std::getline(this->_fd, this->_buff ,'\0');
		this->_fd.close();
	}
}

bool	Sed::setResult(void){
	std::stringstream	join;
	std::string			result;

	join << this->_filename << ".result";
	this->_filename = join.str();
	this->_result.open(this->_filename);
	if (this->_result.is_open()){
		setBuff();
		return true;
	}else
		return false;
}

void	Sed::getFilename(void){
	std::cout << this->_filename << std::endl;
}

void	Sed::setBuff(void){
	setFd();
	if (this->_buff.find(this->_s1) != std::string::npos)
		return ;
	std::cout << this->_buff << std::endl;
	while (this->_buff.find(this->_s1) != std::string::npos)
	{
		this->_buff.insert(this->_buff.find(this->_s1) + this->_s1.size(), this->_s2);
		this->_buff.erase(this->_buff.find(this->_s1), this->_s1.size());
	}
	this->_result << this->_buff;
}
