/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 17:53:22 by ayel-mou          #+#    #+#             */
/*   Updated: 2025/05/01 05:14:23 by ayel-mou         ###   ########.fr       */
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

    std::cout << animals[0]->getType() << std::endl;
    std::cout << animals[5]->getType() << std::endl;
    std::cout << std::setfill('~') << std::setw(45) << "~" << std::endl;
    Brain *brain;
    brain = &animals[0]->GetBrain();

    
    brain->SetIdea(3,"was here!");
    brain->SetIdea(7,"Fay9 w na3ss 3el mezika kter men 7a9i9a jatni bibo!");
    brain->SetIdea(0,"mafiya li ykaker");
    std::cout <<  brain->GetIdea(3) << std::endl;
    std::cout <<  brain->GetIdea(7) << std::endl;
    std::cout <<  brain->GetIdea(0) << std::endl;
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