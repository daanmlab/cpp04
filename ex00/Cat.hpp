/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabalm <dabalm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 19:04:51 by dabalm            #+#    #+#             */
/*   Updated: 2024/03/09 23:23:48 by dabalm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"
# include <string>

class Cat : public Animal
{
public:
    Cat();
    Cat(Cat &cat);
    ~Cat();
    Cat &operator=(Cat &cat);
    void makeSound() const;
};


#endif