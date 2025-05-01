/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 17:49:04 by ayel-mou          #+#    #+#             */
/*   Updated: 2025/05/01 05:09:46 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
    : Animal()
{
    std::cout << "Default constructor called for Cat" << std::endl;
    brain = new Brain();
    type = "Cat";
}

Cat::Cat(const Cat& copy)
    : Animal(copy)
{
    std::cout << "Copy constructor called for Cat" << std::endl;
    type = copy.type;
    brain = new Brain(*copy.brain); 
}

Cat&  Cat::operator=(const Cat& other)
{
    std::cout << "Copy assignment operator called for Cat" << std::endl;
    if (this != &other)
    {
        delete brain;
        
        type = other.type;
        brain = new Brain(*other.brain);
    }
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "Meow Meow!" << std::endl;
}


Brain &Cat::GetBrain(void) const
{
	return (*brain);
}

void Cat::setBrain(Brain const &brain)
{
	if (this->brain)
		delete this->brain; 
	this->brain = new Brain(brain); 
}

Cat::~Cat()
{
    std::cout << "Destructor called for Cat" << std::endl;
    delete brain;
}