/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 14:20:15 by ayel-mou          #+#    #+#             */
/*   Updated: 2025/04/18 15:46:53 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    private:
        
    public:
        WrongCat();
        WrongCat(const WrongCat& copy);
        WrongCat&  operator=(const WrongCat& other);
        ~WrongCat();
        void makeSound() const;  
};


#endif

