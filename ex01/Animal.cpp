/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 14:55:16 by ayel-mou          #+#    #+#             */
/*   Updated: 2025/04/21 08:49:28 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    type = "undefind animal";
    std::cout << "Default constructor called for animal" << std::endl;
}


Animal::Animal(const Animal& other)
    : type(other.type)
{
    std::cout << "Copy constructor called for Animal" << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
    std::cout << "Copy assignment operator called for Animal" << std::endl;
    if (this != &other)
    {
        type = other.type;
    }
    return (*this);
}   

void Animal::makeSound() const
{
    std::cout << "Undefine sound!" << std::endl; 
}

const std::string Animal::getType() const
{
    return (type);
}

Animal::~Animal()
{
    std::cout << "Destructor called for Animal" << std::endl;
}
