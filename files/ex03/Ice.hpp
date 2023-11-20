/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 09:02:41 by acrespy           #+#    #+#             */
/*   Updated: 2023/11/20 09:02:41 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
	private:
		std::string _type;

	public:
		Ice(void);
		Ice(std::string const &type);
		Ice(Ice const &src);
		~Ice(void);

		Ice &operator=(Ice const &rhs);

		std::string const &getType() const;
		void setType(std::string const &type);

		Ice *clone() const;
		void use(ICharacter& target);
};

#endif
