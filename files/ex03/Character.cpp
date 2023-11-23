/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 09:35:46 by acrespy           #+#    #+#             */
/*   Updated: 2023/11/20 09:35:48 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{
	std::cout << "Character default constructor called" << std::endl;
}

Character::Character(std::string name) : _name(name)
{
	std::cout << "Character name constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::Character(Character const &src)
{
	std::cout << "Character copy constructor called" << std::endl;
	*this = src;
}

Character::~Character(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] != NULL)
			delete (this->_inventory[i]);
	}
}

Character &Character::operator=(Character const &rhs)
{
	std::cout << "Character assignation operator called" << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs.getName();
		for (int i = 0; i < 4; i++)
		{
			if (rhs.getSlot(i) != NULL)
				this->_inventory[i] = rhs.getSlot(i)->clone();
			else
				this->_inventory[i] = NULL;
		}
	}
	return (*this);
}

std::string const &Character::getName() const
{
	return (this->_name);
}

AMateria *Character::getSlot(int slot) const
{
	return (this->_inventory[slot]);
}

void Character::setName(std::string name)
{
	this->_name = name;
}

void Character::setSlot(int slot, AMateria const &m)
{
	this->_inventory[slot] = m.clone();
}

void Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			return ;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		return ;
	this->_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
	this->_inventory[idx]->use(target);
	this->unequip(idx);
}
