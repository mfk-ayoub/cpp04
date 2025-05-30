/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 17:47:22 by ayel-mou          #+#    #+#             */
/*   Updated: 2025/05/01 06:52:33 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain* brain;
        
    public:
        Cat();
        Cat(const Cat& copy);
        Cat&  operator=(const Cat& other);
        void    setBrain(Brain const &brain);
        Brain   &GetBrain(void) const;
        const std::string& GetIdea(int index) const;
        void SetIdea(int index, const std::string& idea);
        ~Cat();
        void makeSound() const;  
};

#endif


