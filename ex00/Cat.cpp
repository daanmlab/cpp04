/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabalm <dabalm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 19:10:51 by dabalm            #+#    #+#             */
/*   Updated: 2024/03/10 00:22:12 by dabalm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
    this->type_ = "Cat";
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(Cat &cat) : Animal() {
    *this = cat;
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(Cat &cat) {
    this->type_ = cat.type_;
    return *this;
}

void Cat::makeSound() const {
    std::cout << "miauw" << std::endl;
}

Cat::~Cat() {
    std::cout << "Cat destructor called" << std::endl;
}