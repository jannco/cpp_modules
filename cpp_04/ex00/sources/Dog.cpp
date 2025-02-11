/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yadereve <yadereve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 11:14:59 by yadereve          #+#    #+#             */
/*   Updated: 2024/12/04 12:37:32 by yadereve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	std::cout  << ORANGE << "Dog default constructor called" << NC << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
	std::cout << ORANGE << "Dog copy constructor called" << NC << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
	if (this != &other)
		Animal::operator=(other);
	std::cout << ORANGE << "Dog copy assignment operator called" << NC << std::endl;
	return *this;
}

Dog::~Dog()
{
	std::cout << ORANGE << "Dog destructor called" << NC << std::endl;
}

void Dog::makeSound() const
{
	std::cout << ORANGE << "Woof!" << NC << std::endl;
}
