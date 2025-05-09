/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 08:31:20 by ayel-mou          #+#    #+#             */
/*   Updated: 2025/05/09 06:59:37 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter
{
    private:
        std::string _name;
        AMateria* _inventory[4];
        Character();

    public:
        Character(std::string const & name);
        Character(const Character& other);
        Character& operator=(const Character& other);
        void equip(AMateria* m);
        std::string const & getName() const;
        void unequip(int idx);
        void use(int idx, ICharacter& target);
        virtual ~Character();
};

