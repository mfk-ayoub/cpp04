/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 19:46:37 by ayel-mou          #+#    #+#             */
/*   Updated: 2025/04/18 14:51:39 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ANIMAL_HPP_
#define  _ANIMAL_HPP_
#include <string>
#include <iostream>

class  Animal
{
	protected:
		std::string type;
	public :
		Animal();
		Animal(const Animal& other);
		Animal& operator=(const Animal& other);
		virtual ~Animal();
		const std::string getType() const;
		virtual void makeSound() const;	
};


#endif