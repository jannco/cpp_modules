/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yadereve <yadereve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 09:23:26 by yadereve          #+#    #+#             */
/*   Updated: 2024/12/03 15:33:49 by yadereve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap default constructor called for " << ORANGE << _name << NC << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap parameterised constructor called for " << ORANGE << _name << NC << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	std::cout << "ScavTrap copy constructor called for " << ORANGE << _name << NC << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	if(this != &other)
		ClapTrap::operator=(other);
	std::cout << "ScavTrap copy assignment operator called for " << ORANGE << _name << NC << std::endl;
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called for " << ORANGE << _name << NC << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << ORANGE << _name << NC << " is now in Gate keeper mode." << std::endl;
}

void ScavTrap::showTrap()
{
	std::cout << RED << "----------------------------------" << NC << std::endl;
	std::cout << "Name:\t" << _name << std::endl;
	std::cout << "Hit:\t" << _hitPoints << std::endl;
	std::cout << "Energy:\t" << _energyPoints << std::endl;
	std::cout << "Damage:\t" << _attackDamage << std::endl;
	std::cout << RED << "----------------------------------" << NC << std::endl;
}