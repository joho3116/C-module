/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 15:09:33 by johokyoun         #+#    #+#             */
/*   Updated: 2022/02/03 23:23:58 by johokyoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal {

public:
	WrongCat();
	WrongCat(const WrongCat& copy);
	WrongCat& operator=(const WrongCat& copy);
	~WrongCat();

	virtual void makeSound() const;
};

#endif