/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 14:22:38 by ayel-mou          #+#    #+#             */
/*   Updated: 2025/04/18 15:46:15 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
    : WrongAnimal()
{
    std::cout << "Default constructor called for WrongCat" << std::endl;
    type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& copy)
    : WrongAnimal(copy)
{
    std::cout << "Copy constructor called for WrongCat" << std::endl;
    type = copy.type;
}

WrongCat&  WrongCat::operator=(const WrongCat& other)
{
    std::cout << "Copy assignment operator called for WrongCat" << std::endl;
    if (this != &other)
    {
        type = other.type;
    }
    return (*this);
}

void WrongCat::makeSound() const
{
    std::cout << "the WrongCat makees a sound" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "Destructor called for WrongCat" << std::endl;
}