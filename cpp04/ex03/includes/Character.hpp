/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivotints <ivotints@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 11:12:58 by ivotints          #+#    #+#             */
/*   Updated: 2024/09/01 11:54:45 by ivotints         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "Floor.hpp"

class Character : public ICharacter
{
	private:
		std::string	name;
		AMateria	*inventory[4];

	public:
		Character(std::string const & name);
		Character(const Character &src);
		virtual ~Character(void); ///////////////////////??
		Character	&operator=(const Character &src);

		std::string const & getName(void) const;
		void	equip(AMateria *m);
		void	unequip(int inx);
		void	use(int idx, ICharacter &target);
};

#endif
