/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 17:53:22 by ayel-mou          #+#    #+#             */
/*   Updated: 2025/04/23 18:00:19 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include <iomanip> 


int main()
{
    
    const int size = 10;
    Animal* animals[size];
    
	int				index;
    
	index = 0;
	while (index < size)
	{
        if (index < size / 2)
        animals[index] = new Dog();
		else
        animals[index] = new Cat();
		index++;
	}
    

    std::cout << std::setfill('~') << std::setw(45) << "~" << std::endl;

    const Animal* j = new Dog();
    const Animal* i = new Cat();
    

    std::cout << i->getType() << std::endl;
    i->makeSound();

    std::cout << j->getType() << std::endl;
    j->makeSound();

    std::cout << std::setfill('~') << std::setw(45) << "~" << std::endl;

    index = -1;
    while (++index < size)
        delete animals[index];
    
    delete i;
    delete j;
    return (0);
}