/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabalm <dabalm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 18:52:06 by dabalm            #+#    #+#             */
/*   Updated: 2024/03/10 00:16:03 by dabalm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP
# include <string>
# include <iostream>
class WrongAnimal
{
protected:
    std::string type_;
public:
    WrongAnimal();
    WrongAnimal(WrongAnimal &value);
    WrongAnimal &operator=(WrongAnimal &value);
    ~WrongAnimal();
    std::string getType() const;
    void makeSound() const;
};


#endif