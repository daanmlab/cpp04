/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabalm <dabalm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 19:10:51 by dabalm            #+#    #+#             */
/*   Updated: 2024/03/10 00:21:22 by dabalm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
    this->type_ = "WrongCat";
    std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat &cat) : WrongAnimal() {
    *this = cat;
}

WrongCat &WrongCat::operator=(WrongCat &cat) {
    this->type_ = cat.type_;
    return *this;
}

void WrongCat::makeSound() const {
    std::cout << "miauw" << std::endl;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat destructor called" << std::endl;
}