/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 07:49:21 by ayel-mou          #+#    #+#             */
/*   Updated: 2025/05/01 09:15:09 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"
#include <iostream>
class Cure : public AMateria
{
    private:
      
    public:
        void				use(ICharacter &target);
        Cure();
        ~Cure();
};

Cure::Cure(/* args */)
{
}

void    Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "’s" <<  " wounds *" << std::endl;
}

Cure::~Cure()
{
}
