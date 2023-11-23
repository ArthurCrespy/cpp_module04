/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 08:56:30 by acrespy           #+#    #+#             */
/*   Updated: 2023/11/20 08:56:30 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) : _type("default")
{
	std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(std::string type) : _type(type)
{
	std::cout << "AMateria name constructor called" << std::endl;}

AMateria::AMateria(AMateria const &src)
{
	std::cout << "AMateria copy constructor called" << std::endl;
	*this = src;
}

AMateria::~AMateria(void)
{
	std::cout << "AMateria destructor called" << std::endl;
}

AMateria &AMateria::operator=(AMateria const &rhs)
{
	std::cout << "AMateria assignation operator called" << std::endl;
	if (this != &rhs)
		setType(rhs.getType());
	return (*this);
}

std::string const &AMateria::getType() const
{
	return (this->_type);
}

void AMateria::setType(std::string const &type)
{
	this->_type = type;
}

void AMateria::use(ICharacter& target)
{
    std::cout << "Default use implementation for " << _type << " on " << target.getName() << std::endl;
}
