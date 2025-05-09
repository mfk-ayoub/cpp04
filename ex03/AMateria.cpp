/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 07:44:45 by ayel-mou          #+#    #+#             */
/*   Updated: 2025/05/09 08:58:01 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const& type)
{
    this->type =  type;
}
std::string const& AMateria::getType() const
{
    return type;
}

void AMateria::use(ICharacter& target)
{
    (void) target;
}

AMateria::~AMateria()
{
    
}