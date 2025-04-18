/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 14:19:32 by ayel-mou          #+#    #+#             */
/*   Updated: 2025/04/18 15:49:35 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    type = "undefind";
    std::cout << "Default constructor called for WrongAnimal" << std::endl;
}


WrongAnimal::WrongAnimal(const WrongAnimal& other)
    : type(other.type)
{
    std::cout << "Copy constructor called for WrongAnimal" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
    std::cout << "Copy assignment operator called for WrongAnimal" << std::endl;
    if (this != &other)
    {
        type = other.type;
    }
    return (*this);
}   

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal sound" << std::endl; 
}

const std::string WrongAnimal::getType() const
{
    return (type);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Destructor called for WrongAnimal" << std::endl;
}