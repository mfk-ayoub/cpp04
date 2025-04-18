/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 13:14:33 by ayel-mou          #+#    #+#             */
/*   Updated: 2025/04/18 14:58:47 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
    : Animal()
{
    std::cout << "Default constructor called for Dog" << std::endl;
    type = "Dog";
}

Dog::Dog(const Dog& copy)
    : Animal(copy)
{
    std::cout << "Copy constructor called for Dog" << std::endl;
    type = copy.type;
}

Dog&  Dog::operator=(const Dog& other)
{
    std::cout << "Copy assignment operator called for Dog" << std::endl;
    if (this != &other)
    {
        type = other.type;
    }
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "the Dog make a sound" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Destructor called for Dog" << std::endl;
}