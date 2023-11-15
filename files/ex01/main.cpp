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
	Animal *zoo[10];

	for (int i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
			zoo[i] = new Dog();
		else
			zoo[i] = new Cat();
	}

	for (int i = 0; i < 10; i++)
		zoo[i]->makeSound();

	for (int i = 0; i < 10; i++)
		delete zoo[i];

	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;//should not create a leak
	delete i;

	return (0);
}
