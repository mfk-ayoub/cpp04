/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 19:46:37 by ayel-mou          #+#    #+#             */
/*   Updated: 2025/04/12 15:04:52 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ANIMAL_HPP_
#define  _ANIMAL_HPP_
#include <string>


class  Animal
{
	protected:
		std::string type;
	public :
		Animal();
		Animal(std::string type);
		Animal(const Animal& other);
		Animal& Animal(const Animal& other);
		~Animal();
		const std::string& getType() const;
		void makeSound();	
};


#endif