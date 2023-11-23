/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 09:35:39 by acrespy           #+#    #+#             */
/*   Updated: 2023/11/20 09:35:39 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : public ICharacter
{
	private:
		std::string _name;
		AMateria *_inventory[4];

	public:
		Character(void);
		Character(std::string name);
		Character(Character const &src);
		~Character(void);

		Character &operator=(Character const &rhs);

		std::string const &getName() const;
		AMateria *getSlot(int slot) const;

		void setName(std::string name);
		void setSlot(int slot, AMateria const &m);

		void equip(AMateria *m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif
