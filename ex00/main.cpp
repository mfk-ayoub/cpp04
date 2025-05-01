/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 17:53:22 by ayel-mou          #+#    #+#             */
/*   Updated: 2025/04/23 17:43:51 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include <iomanip> 

void ValidatedPointer(const Animal* obj)
{
    obj->makeSound();
}
    
int main(void)
{

    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << std::setfill('~') << std::setw(45) << "~" << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << meta->getType() << " " << std::endl;
    std::cout << std::setfill('~') << std::setw(45) << "~" << std::endl;

    i->makeSound();
    j->makeSound();
    meta->makeSound();
    std::cout << std::setfill('~') << std::setw(45) << "~" << std::endl;
    ValidatedPointer(meta);
    ValidatedPointer(i);
    ValidatedPointer(j);
    std::cout << std::setfill('~') << std::setw(45) << "~" << std::endl;

    delete meta;
    delete j;
    delete i;
    return (0);
}