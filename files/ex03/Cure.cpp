/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 09:31:16 by acrespy           #+#    #+#             */
/*   Updated: 2023/11/20 09:31:16 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
	std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(Cure const &src) : AMateria(src)
{
	std::cout << "Cure copy constructor called" << std::endl;
	*this = src;
}

Cure::~Cure(void)
{
	std::cout << "Cure destructor called" << std::endl;
}

Cure &Cure::operator=(Cure const &rhs)
{
	std::cout << "Cure assignation operator called" << std::endl;
	if (this != &rhs)
	{
		setType(rhs.getType());
	}
	return (*this);
}

std::string const &Cure::getType() const
{
	return (this->_type);
}

void Cure::setType(std::string const &type)
{
	this->_type = type;
}

Cure *Cure::clone() const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
