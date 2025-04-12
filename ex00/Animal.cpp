/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 14:55:16 by ayel-mou          #+#    #+#             */
/*   Updated: 2025/04/12 15:05:11 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    
}

Animal::Animal(std::string type)
    : type(type)
{
    
}
Animal::Animal(const Animal& other)
    : type(other.type)
{
    
}

Animal& Animal::Animal(const Animal& other)
{
    
}

void Animal::makeSound()
{
    
}

const std::string& Animal::getType() const
{
    
}

Animal::~Animal()
{
    
}
