/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 07:49:30 by ayel-mou          #+#    #+#             */
/*   Updated: 2025/05/09 09:06:28 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"
#include <iostream>

class Ice : public AMateria
{
    public:
        Ice();
        Ice(const Ice& other);
        Ice& operator=(const Ice& other);
        virtual ~Ice();
    
        virtual AMateria* clone() const;
        virtual void use(ICharacter& target);
};
