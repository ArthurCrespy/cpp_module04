/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 15:09:31 by acrespy           #+#    #+#             */
/*   Updated: 2023/06/14 15:59:54 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
	std::cout << "Dog default constructor called" << std::endl;
	brain = new Brain();
}

Dog::Dog(Dog const &src) : Animal()
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = src;
}

Dog::~Dog(void)
{
	delete (brain);
	std::cout << "Dog destructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &rhs)
{
	std::cout << "Dog assignation operator called" << std::endl;
	if (this != &rhs)
	{
		setType(rhs.getType());
		brain = new Brain(*rhs.brain);
	}
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Wouf Wouf" << std::endl;
}
