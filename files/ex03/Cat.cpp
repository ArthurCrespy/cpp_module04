/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 15:09:31 by acrespy           #+#    #+#             */
/*   Updated: 2023/06/14 15:59:54 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : AAnimal("Cat")
{
	std::cout << "Cat default constructor called" << std::endl;
	brain = new Brain();
}

Cat::Cat(Cat const &src) : AAnimal()
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = src;
}

Cat::~Cat(void)
{
	delete (brain);
	std::cout << "Cat destructor called" << std::endl;
}

Cat &Cat::operator=(Cat const &rhs)
{
	std::cout << "Cat assignation operator called" << std::endl;
	if (this != &rhs)
	{
		setType(getType());
		brain = new Brain(*rhs.brain);
	}
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Miaou Miaou" << std::endl;
}
