/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 14:55:16 by ayel-mou          #+#    #+#             */
/*   Updated: 2025/04/18 13:35:58 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    type = "default animal";
    std::cout << "Default constructor called for animal" << std::endl;
}


Animal::Animal(const Animal& other)
    : type(other.type)
{
    
}

Animal& Animal::operator=(const Animal& other)
{
    if (this != &other)
    {
        type = other.type;
    }
    return (*this);
}   

void Animal::makeSound()
{
    std::cout << "The animal makes a sound" << std::endl; 
}

const std::string Animal::getType() const
{
    return (type);
}

Animal::~Animal()
{
    
}
