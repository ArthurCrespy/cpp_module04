/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 09:36:24 by acrespy           #+#    #+#             */
/*   Updated: 2023/11/20 09:36:24 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include <iostream>
# include "AMateria.hpp"

class AMateria;

class ICharacter
{
	protected:
		const std::string _name;

	public:
		ICharacter(void);
		ICharacter(std::string name);
		ICharacter(ICharacter const &src);
		virtual ~ICharacter(void);

		ICharacter &operator=(ICharacter const &rhs);

		virtual std::string const &getName() const = 0;
		virtual void setName(std::string name) = 0;

		virtual void equip(AMateria *m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};

#endif
