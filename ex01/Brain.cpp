/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 09:15:53 by ayel-mou          #+#    #+#             */
/*   Updated: 2025/04/23 22:59:56 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Default constructor called for Brain" << std::endl;
    for (int i = 0; i < 100;i++)
    {
        ideas[i]= "rass khaoui";
    }
}

Brain::Brain(const Brain& copy)
{
    std::cout << "Copy constructor called for Brain" << std::endl;
    for (int i = 0; i < 100;i++)
    {
        ideas[i]= copy.ideas[i];
    }
   
}

Brain& Brain::operator=(const Brain& other)
{
    std::cout << "Copy assignment operator called for Brain" << std::endl;
    if (this != &other)
    {
        for (int i = 0; i < 100;i++)
        {
            ideas[i]= other.ideas[i];
        }
    }
    return (*this);
}

std::string& Brain::GetIdea(int index) const
{
    
}

Brain::~Brain()
{
    std::cout << "Destructor called for Cat" << std::endl;
}