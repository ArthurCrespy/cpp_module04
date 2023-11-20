/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 09:02:35 by acrespy           #+#    #+#             */
/*   Updated: 2023/11/20 09:02:35 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice"), _type("ice")
{
	std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(Ice const &src) : AMateria(src)
{
	std::cout << "Ice copy constructor called" << std::endl;
	*this = src;
}

Ice::~Ice(void)
{
	std::cout << "Ice destructor called" << std::endl;
}

Ice &Ice::operator=(Ice const &rhs)
{
	std::cout << "Ice assignation operator called" << std::endl;
	if (this != &rhs)
	{
		setType(rhs.getType());
	}
	return (*this);
}

std::string const &Ice::getType() const
{
	return (this->_type);
}

void Ice::setType(std::string const &type)
{
	this->_type = type;
}

Ice *Ice::clone() const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
