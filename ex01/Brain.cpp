/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 09:15:53 by ayel-mou          #+#    #+#             */
/*   Updated: 2025/05/01 04:42:40 by ayel-mou         ###   ########.fr       */
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

const std::string& Brain::GetIdea(int index) const
{
    static const std::string error = "Error: idea Not found!";
    if (index >= 0 && index < 100)
        return (ideas[index]);
    else
        return (error);
}


void Brain::SetIdea(int index, const std::string& idea)
{
    if (index < 0 || index >= 100)
    {
        std::cerr << "Error: index must be in range 0--99!" << std::endl;
        return ;
    }
    ideas[index] = idea;
}


Brain::~Brain()
{
    std::cout << "Destructor called for Cat" << std::endl;
}