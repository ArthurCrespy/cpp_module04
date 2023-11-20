/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 08:56:24 by acrespy           #+#    #+#             */
/*   Updated: 2023/11/20 08:56:24 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string _type;

	public:
		AMateria(void);
		AMateria(std::string type);
		AMateria(AMateria const &src);
		virtual ~AMateria(void);

		AMateria &operator=(AMateria const &rhs);

		std::string const &getType() const; //Returns the materia type
		void setType(std::string const &type);

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter &target);

};


#endif
