/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabalm <dabalm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 19:04:51 by dabalm            #+#    #+#             */
/*   Updated: 2024/03/10 00:17:05 by dabalm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_HPP
# define CAT_HPP
# include "WrongAnimal.hpp"
# include <string>

class WrongCat : public WrongAnimal
{
public:
    WrongCat();
    WrongCat(WrongCat &cat);
    ~WrongCat();
    WrongCat &operator=(WrongCat &cat);
    void makeSound() const;
};


#endif