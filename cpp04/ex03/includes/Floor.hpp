/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Floor.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivotints <ivotints@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 11:15:39 by ivotints          #+#    #+#             */
/*   Updated: 2024/09/01 12:16:19 by ivotints         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLOOR_HPP
# define FLOOR_HPP

# include "AMateria.hpp"

struct MateriaList
{
	AMateria	*materia;
	MateriaList	*next;
};

class Floor
{
	private:
		MateriaList	*list;

		Floor();
		Floor(const Floor &src);
		~Floor();

		Floor			&operator=(const Floor &rhs);
		void			addMateria(AMateria* materia);
		void			cleanFloor();
		static Floor	&getInstance();

	public:
		static void dropMateria(AMateria* materia);
		static void clean();
};

#endif
