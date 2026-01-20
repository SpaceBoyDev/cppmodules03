/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dario <dario@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 20:18:47 by dario             #+#    #+#             */
/*   Updated: 2026/01/20 18:01:36 by dario            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	this->_hitPts = 100;
	this->_energyPts = 50;
	this->_attackDmg = 20;
	this->_name = "ScavTrap";
	std::cout << "ScavTrap " << _name << " default constructor\n";
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_hitPts = 100;
	this->_energyPts = 50;
	this->_attackDmg = 20;
	std::cout << "ScavTrap " << _name << " name constructor\n";
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap()
{
	this->_name = copy._name;
	this->_hitPts = copy._hitPts;
	this->_energyPts = copy._energyPts;
	this->_attackDmg = copy._attackDmg;
	std::cout << "ScavTrap " << _name << " copy constructor\n";

}

ScavTrap &ScavTrap::operator=(const ScavTrap &copy)
{
	if (this != &copy)
	{
		this->_name = copy._name;
		this->_hitPts = copy._hitPts;
		this->_energyPts = copy._energyPts;
		this->_attackDmg = copy._attackDmg;
		std::cout << "ScavTrap " << _name << " equal operator\n";
	}
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << _name << " has been destroyed\n";
}

void ScavTrap::attack(const std::string &target)
{
	if (this->_energyPts <= 0 || this->_hitPts <= 0)
	{
		std::cout << "ScavTrap " << _name << " can't attack\n";
		return ;
	}
	this->_energyPts--;
	std::cout << "ScavTrap " << _name << " attacks " << target
		<< ", causing " << this->_attackDmg << " points of damage!\n";
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->_name << " enters GATE KEEPER MODE!!!\n";
}
