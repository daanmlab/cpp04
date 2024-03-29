/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabalm <dabalm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 18:56:46 by dabalm            #+#    #+#             */
/*   Updated: 2024/03/10 00:22:38 by dabalm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type_("") {
    std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(Animal &value) : type_(value.type_) {
    std::cout << "Animal copy constructor called" << std::endl;
}

Animal &Animal::operator=(Animal &value) {
    this->type_ = value.type_;
    return *this;
}

std::string Animal::getType() const {
    return this->type_;
}

void Animal::makeSound() const {
    std::cout << "Animal sound" << std::endl;
}

Animal::~Animal() {
    std::cout << "Animal destructor called" << std::endl;
}