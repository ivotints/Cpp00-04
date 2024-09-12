/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivotints <ivotints@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 12:48:34 by ivotints          #+#    #+#             */
/*   Updated: 2024/09/01 12:58:03 by ivotints         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "Floor.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria *learned[4];

	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource &src);
		virtual ~MateriaSource(void);
		MateriaSource	&operator=(const MateriaSource &src);

		void learnMateria(AMateria *m);
		AMateria *createMateria(std::string const & type);
};

#endif
