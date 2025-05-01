/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 09:12:50 by ayel-mou          #+#    #+#             */
/*   Updated: 2025/05/01 09:13:10 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
    : name("default")
{
    
}

Character::Character(std::string& name)
{
    this->name = name;   
}
void Character::SetName(std::string& name)
{
    this->name = name;   
}
const  std::string& Character::GetName() const
{
    return (name);
}
        
Character::~Character()
{
}

