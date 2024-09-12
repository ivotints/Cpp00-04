/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivotints <ivotints@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 13:14:58 by ivotints          #+#    #+#             */
/*   Updated: 2024/09/01 13:48:54 by ivotints         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice(void);
		Ice(const Ice &src);
		virtual ~Ice();
		Ice	&operator=(const AMateria &src);
		Ice	&operator=(const Ice &src);

		AMateria *clone(void) const;
		void use(ICharacter &target);
};


#endif
