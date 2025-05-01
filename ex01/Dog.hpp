/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 13:14:31 by ayel-mou          #+#    #+#             */
/*   Updated: 2025/05/01 05:10:27 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain* brain;
    public:
        Dog();
        Dog(const Dog& copy);
        Dog&  operator=(const Dog& other);
        Brain &GetBrain(void) const;
        ~Dog();
        void makeSound() const;  
};

#endif