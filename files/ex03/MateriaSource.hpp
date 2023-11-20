/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 10:23:20 by acrespy           #+#    #+#             */
/*   Updated: 2023/11/20 10:23:20 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		std::string _name;
		AMateria *_materia[4];

	public:
		MateriaSource(void);
		MateriaSource(std::string name);
		MateriaSource(MateriaSource const &src);
		~MateriaSource(void);

		MateriaSource &operator=(MateriaSource const &rhs);

		std::string const &getName() const;
		AMateria *getSlot(int slot) const;

		void setName(std::string name);
		void setSlot(int slot, AMateria const &m);

		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const &type);

};


#endif
