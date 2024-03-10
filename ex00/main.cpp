/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabalm <dabalm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:00:38 by dabalm            #+#    #+#             */
/*   Updated: 2024/03/10 00:18:47 by dabalm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    {
        const Animal* meta = new Animal();
        const Animal* j = new Dog();
        const Animal* i = new Cat();
        std::cout << j->getType() << " " << std::endl;
        std::cout << i->getType() << " " << std::endl;
        i->makeSound(); //will output the cat sound!
        j->makeSound();
        
        meta->makeSound();

        delete meta;
        delete j;
        delete i;
    }
    {
        const WrongAnimal* meta = new WrongAnimal();
        const WrongAnimal* j = new WrongCat();
        std::cout << j->getType() << " " << std::endl;
        j->makeSound();
        meta->makeSound();

        delete meta;
        delete j;
    }
    
    return 0;
}