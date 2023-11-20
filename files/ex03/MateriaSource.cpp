/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 10:24:23 by acrespy           #+#    #+#             */
/*   Updated: 2023/11/20 10:24:23 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) : _name("MateriaSource")
{
	for (int i = 0; i < 4; i++)
		this->_materia[i] = NULL;
	std::cout << "MateriaSource default constructor called" << std::endl;
}

MateriaSource::MateriaSource(std::string name) : _name(name)
{
	for (int i = 0; i < 4; i++)
		this->_materia[i] = NULL;
	std::cout << "MateriaSource name constructor called" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
	std::cout << "MateriaSource copy constructor called" << std::endl;
	*this = src;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materia[i])
			delete (this->_materia[i]);
	}
	std::cout << "MateriaSource destructor called" << std::endl;
}

MateriaSource& MateriaSource::operator=(MateriaSource const &rhs)
{
    std::cout << "MateriaSource assignation operator called" << std::endl;
    if (this != &rhs)
    {
        this->_name = rhs.getName();
        for (int i = 0; i < 4; i++)
        {
            if (rhs.getSlot(i) != NULL)
                this->_materia[i] = rhs.getSlot(i)->clone();
            else
                this->_materia[i] = NULL;
        }
    }
    return (*this);
}

std::string const &MateriaSource::getName() const
{
	return (this->_name);
}

AMateria *MateriaSource::getSlot(int slot) const
{
	return (this->_materia[slot]);
}

void MateriaSource::setName(std::string name)
{
	this->_name = name;
}

void MateriaSource::setSlot(int slot, AMateria const &m)
{
	this->_materia[slot] = m.clone();
}

void MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->_materia[i])
		{
			this->_materia[i] = m;
			return ;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	int i = 0;

	while (i < 4 && this->_materia[i] && this->_materia[i]->getType() != type)
		i++;
	if (i >= 4 || !(this->_materia)[i])
	{
		std::cout << type << " materia does not exit\n";
		return (NULL);
	}
	std::cout << "Materia " << type << " created\n";
	return (((this->_materia)[i])->clone());
}

