/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabalm <dabalm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 18:52:06 by dabalm            #+#    #+#             */
/*   Updated: 2024/03/09 19:01:43 by dabalm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <string>

class Animal
{
protected:
    std::string type;
public:
    Animal();
    Animal(Animal &value);
    Animal &operator=(Animal &value);
    ~Animal();
    virtual void const makeSound() = 0;
};


#endif