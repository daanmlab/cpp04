/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabalm <dabalm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 18:56:46 by dabalm            #+#    #+#             */
/*   Updated: 2024/03/09 18:59:43 by dabalm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("") {}

Animal::Animal(Animal &value) : type(value.type) {}

Animal &Animal::operator=(Animal &value) {
    this->type = value.type;
}

Animal::~Animal() {}