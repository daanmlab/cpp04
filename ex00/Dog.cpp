/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabalm <dabalm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 19:10:51 by dabalm            #+#    #+#             */
/*   Updated: 2024/03/10 00:21:57 by dabalm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
    this->type_ = "Dog";
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(Dog &dog) : Animal() {
    *this = dog;
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(Dog &dog) {
    this->type_ = dog.type_;
    return *this;
}

void Dog::makeSound() const {
    std::cout << "Woef" << std::endl;
}

Dog::~Dog() {
    std::cout << "Dog destructor called" << std::endl;
}