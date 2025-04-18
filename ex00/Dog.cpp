/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 13:14:33 by ayel-mou          #+#    #+#             */
/*   Updated: 2025/04/18 13:57:05 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
    : Animal()
{
    type = "Dog";
}

Dog::Dog(const Dog& copy)
    : Animal(copy)
{
    type = copy.type;
}

Dog&  Dog::operator=(const Dog& other)
{
    if (this != &other)
    {
        type = other.type;
    }
    return (*this);
}

void Dog::makeSound()
{
    std::cout << "the Dog make a sound" << std::endl;
}

Dog::~Dog()
{
    
}