/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabalm <dabalm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 19:04:51 by dabalm            #+#    #+#             */
/*   Updated: 2024/03/09 23:26:18 by dabalm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"
# include <string>

class Dog : public Animal
{
public:
    Dog();
    Dog(Dog &dog);
    ~Dog();
    Dog &operator=(Dog &dog);
    void makeSound() const;
};


#endif