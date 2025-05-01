/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 13:14:33 by ayel-mou          #+#    #+#             */
/*   Updated: 2025/05/01 06:51:47 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
    : Animal()
{
    std::cout << "Default constructor called for Dog" << std::endl;
    brain = new Brain();
    type = "Dog";
}

Dog::Dog(const Dog& copy)
    : Animal(copy)
{
    std::cout << "Copy constructor called for Dog" << std::endl;
    type = copy.type;
    brain = new Brain(*copy.brain); 
}

Dog&  Dog::operator=(const Dog& other)
{
    std::cout << "Copy assignment operator called for Dog" << std::endl;
    if (this != &other)
    {
        delete brain;
        
        type = other.type;
        brain = new Brain(*other.brain);
    }
    return (*this);
}

Brain &Dog::GetBrain(void) const
{
	return (*brain);
}

const std::string& Dog::GetIdea(int index) const
{
    return brain->GetIdea(index);
}

void Dog::SetIdea(int index, const std::string& idea)
{
    brain->SetIdea(index, idea);
}

void Dog::makeSound() const
{
    std::cout << "owwwww owwwww!" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Destructor called for Dog" << std::endl;
    delete brain;
}