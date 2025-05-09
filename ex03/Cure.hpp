/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 07:49:21 by ayel-mou          #+#    #+#             */
/*   Updated: 2025/05/09 09:05:24 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"
#include <iostream>



class Cure : public AMateria
{
public:
    Cure();
    Cure(const Cure& other);
    Cure& operator=(const Cure& other);
    virtual ~Cure();

    virtual AMateria* clone() const;
    virtual void use(ICharacter& target);
};


