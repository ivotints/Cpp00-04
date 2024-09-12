/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivotints <ivotints@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 17:07:48 by ivotints          #+#    #+#             */
/*   Updated: 2024/09/01 14:27:21 by ivotints         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string	type;
		bool		isTaken;

	public:
		AMateria(std::string const & type);
		virtual ~AMateria(void);
		virtual AMateria &operator=(const AMateria &src);

		std::string			const & getType() const;
		bool				getIsTaken() const;
		void				setIsTaken();
		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter& target);
};

#endif
