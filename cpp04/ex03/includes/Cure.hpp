/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivotints <ivotints@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 13:14:58 by ivotints          #+#    #+#             */
/*   Updated: 2024/09/01 13:19:46 by ivotints         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure(void);
		Cure(const Cure &src);
		virtual ~Cure();
		Cure	&operator=(const AMateria &src);
		Cure	&operator=(const Cure &src);

		AMateria *clone(void) const;
		void use(ICharacter &target);
};


#endif
