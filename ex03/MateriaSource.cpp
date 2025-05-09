/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 06:47:12 by ayel-mou          #+#    #+#             */
/*   Updated: 2025/05/09 09:07:16 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"


MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; ++i)
		_templates[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
	for (int i = 0; i < 4; ++i)
    {
		if (other._templates[i])
			_templates[i] = other._templates[i]->clone();
		else
			_templates[i] = NULL;
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
	if (this != &other) 
    {
		for (int i = 0; i < 4; ++i)
        {
			delete _templates[i];
			if (other._templates[i])
				_templates[i] = other._templates[i]->clone();
			else
				_templates[i] = NULL;
		}
	}
	return *this;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; ++i)
		delete _templates[i];
}

void MateriaSource::learnMateria(AMateria* m)
{
    if (!m)
        return;
    for (int i = 0; i < 4; ++i)
    {
        if (_templates[i] == NULL)
        {
            _templates[i] = m->clone();
            delete m;
            return;
        }
    }
    delete m;
}


AMateria* MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; ++i)
    {
		if (_templates[i] && _templates[i]->getType() == type)
			return _templates[i]->clone();
	}
	return NULL;
}
