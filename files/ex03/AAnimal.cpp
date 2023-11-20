/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 15:09:31 by acrespy           #+#    #+#             */
/*   Updated: 2023/06/14 15:59:54 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void) : type("Default")
{
	std::cout << "AAnimal default constructor called" << std::endl;
}

AAnimal::AAnimal(std::string type) : type(type)
{
	std::cout << "AAnimal name constructor called" << std::endl;
}

AAnimal::AAnimal(AAnimal const &src)
{
	std::cout << "AAnimal copy constructor called" << std::endl;
	*this = src;
}

AAnimal::~AAnimal(void)
{
	std::cout << "AAnimal destructor called" << std::endl;
}

AAnimal &AAnimal::operator=(AAnimal const &rhs)
{
	std::cout << "AAnimal assignation operator called" << std::endl;
	if (this != &rhs)
		setType(rhs.getType());
	return (*this);
}

std::string AAnimal::getType() const
{
	return (this->type);
}

void AAnimal::setType(std::string type)
{
	this->type = type;
}

void AAnimal::makeSound() const
{
	std::cout << "Bloup Bloup" << std::endl;
}
