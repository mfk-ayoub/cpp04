/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 17:49:04 by ayel-mou          #+#    #+#             */
/*   Updated: 2025/04/18 13:57:13 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
    : Animal()
{
    type = "Cat";
}

Cat::Cat(const Cat& copy)
    : Animal(copy)
{
    type = copy.type;
}

Cat&  Cat::operator=(const Cat& other)
{
    if (this != &other)
    {
        type = other.type;
    }
    return (*this);
}

void Cat::makeSound()
{
    std::cout << "the cat makees a sound" << std::endl;
}

Cat::~Cat()
{
    
}