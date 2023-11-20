/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 09:31:23 by acrespy           #+#    #+#             */
/*   Updated: 2023/11/20 09:31:23 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
	private:
		std::string _type;

	public:
		Cure(void);
		Cure(std::string const &type);
		Cure(Cure const &src);
		~Cure(void);

		Cure &operator=(Cure const &rhs);

		std::string const &getType() const;
		void setType(std::string const &type);

		Cure *clone() const;
		void use(ICharacter& target);
};


#endif
