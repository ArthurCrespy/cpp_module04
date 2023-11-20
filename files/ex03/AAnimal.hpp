/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 15:09:31 by acrespy           #+#    #+#             */
/*   Updated: 2023/06/14 15:59:54 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

class AAnimal
{
	protected:
		std::string type;

	public:
		AAnimal(void);
		AAnimal(std::string type);
		AAnimal(AAnimal const &src);
		virtual ~AAnimal(void);

		AAnimal &operator=(AAnimal const &rhs);

		std::string getType() const;
		void       setType(std::string type);

		virtual void makeSound() const = 0;
};

#endif
