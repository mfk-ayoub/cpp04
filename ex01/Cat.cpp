/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 17:49:04 by ayel-mou          #+#    #+#             */
/*   Updated: 2025/04/18 14:59:05 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
    : Animal()
{
    std::cout << "Default constructor called for Cat" << std::endl;
    type = "Cat";
}

Cat::Cat(const Cat& copy)
    : Animal(copy)
{
    std::cout << "Copy constructor called for Cat" << std::endl;
    type = copy.type;
}

Cat&  Cat::operator=(const Cat& other)
{
    std::cout << "Copy assignment operator called for Cat" << std::endl;
    if (this != &other)
    {
        type = other.type;
    }
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "the cat makees a sound" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Destructor called for Cat" << std::endl;
}