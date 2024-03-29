/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabalm <dabalm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 18:52:06 by dabalm            #+#    #+#             */
/*   Updated: 2024/03/10 00:19:42 by dabalm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <string>
# include <iostream>
class Animal
{
protected:
    std::string type_;
public:
    Animal();
    Animal(Animal &value);
    Animal &operator=(Animal &value);
    virtual ~Animal();
    std::string getType() const;
    virtual void makeSound() const;
};


#endif