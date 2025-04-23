/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 18:03:39 by ayel-mou          #+#    #+#             */
/*   Updated: 2025/04/23 22:56:51 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define  BRAIN_HPP

#include <string>
#include <iostream>

class  Brain
{
    private:
        std::string ideas[100];
    public:
        Brain();
        Brain(const Brain& copy);
        Brain& operator=(const Brain& other);
        std::string& GetIdea(int index) const;
        ~Brain();
};


#endif
