/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 15:09:31 by acrespy           #+#    #+#             */
/*   Updated: 2023/06/14 15:59:54 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
	void *ptr[100];

	for (int i = 0; i < 100; i++)
	{
		if (i % 2 == 0)
			ptr[i] = new Dog();
		else
			ptr[i] = new Cat();
	}

	for (int i = 0; i < 100; i++)
	{
		(static_cast<Animal *>(ptr[i]))->makeSound();
	}

	for (int i = 0; i < 100; i++)
	{
		delete (static_cast<Animal *>(ptr[i]));
	}
}
