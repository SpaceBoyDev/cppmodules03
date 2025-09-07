/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dario <dario@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 19:49:51 by dario             #+#    #+#             */
/*   Updated: 2025/09/07 20:47:49 by dario            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap("ScavTrap")
{
	this->_hitPts = 100;
	this->_energyPts = 50;
	this->_attackDmg = 20;
	this->_trapType = SCAVTRAP;
	printMsg(ARRIVE, 0, "", this->_trapType);
}

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name)
{
	this->_hitPts = 100;
	this->_energyPts = 50;
	this->_attackDmg = 20;
	this->_trapType = SCAVTRAP;
	printMsg(ARRIVE, 0, "", this->_trapType);
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap()
{
	this->_name = copy._name;
	this->_hitPts = copy._hitPts;
	this->_energyPts = copy._energyPts;
	this->_attackDmg = copy._attackDmg;
	this->_trapType = copy._trapType;
	printMsg(ARRIVE, 0, "", this->_trapType);
}

ScavTrap &ScavTrap::operator=(const ScavTrap &copy)
{
	std::cout << "Copy operator called" << std::endl;
	if (this != &copy)
	{
		this->_name = copy._name;
		this->_hitPts = copy._hitPts;
		this->_energyPts = copy._energyPts;
		this->_attackDmg = copy._attackDmg;
		this->_trapType = copy._trapType;
	}
	return (*this);
}

ScavTrap::~ScavTrap()
{
	printMsg(DESTROY, 0, "", this->_trapType);
}

void ScavTrap::guardGate(void)
{
	printMsg(GUARD, 0, "", this->_trapType);
}
