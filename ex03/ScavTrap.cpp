/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dario <dario@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 19:49:51 by dario             #+#    #+#             */
/*   Updated: 2025/09/07 21:26:04 by dario            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap("ScavTrap")
{
	this->_hitPts = 100;
	this->_energyPts = 50;
	this->_attackDmg = 20;
	this->_trapType = SCAVTRAP;
	printMsg(ARRIVE, 0, "");
}

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name)
{
	this->_hitPts = 100;
	this->_energyPts = 50;
	this->_attackDmg = 20;
	this->_trapType = SCAVTRAP;
	printMsg(ARRIVE, 0, "");
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap()
{
	this->_name = copy._name;
	this->_hitPts = copy._hitPts;
	this->_energyPts = copy._energyPts;
	this->_attackDmg = copy._attackDmg;
	this->_trapType = copy._trapType;
	printMsg(ARRIVE, 0, "");
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
	printMsg(DESTROY, 0, "");
}

void ScavTrap::attack(const std::string &target)
{
	this->_energyPts--;
	printMsg(ATTACK, 0, target);
}

void ScavTrap::guardGate(void)
{
	printMsg(GUARD, 0, "");
}

void	ScavTrap::printMsg(e_action action, const unsigned int amount, const std::string &target)
{
	switch (action)
	{
	case ARRIVE:
		std::cout << BG_GREEN << this->_trapType << BLUE << _name << RST BG_GREEN " has arrived!" RST << std::endl;
		break;

	case DESTROY:
		std::cout << BG_GREEN << this->_trapType << BLUE << _name << RST BG_GREEN " leaves!" RST << std::endl;
		break;

	case ATTACK:
		std::cout << this->_trapType << BLUE << _name << RST " " BG_RED "SCAVattacked" RST " " RED
			<< target << RST "! He did " << _attackDmg << " hit points of damage." << std::endl;
		break;

	case TAKEDMG:
		std::cout << this->_trapType << BLUE << _name << RST " " BG_YELLOW "received" RST " " << amount << " hit points of damage." << std::endl;
		break;

	case REPAIR:
		std::cout << this->_trapType << BLUE << _name << RST " " BG_MAGENTA "repaired himself" RST " " << amount << " hit points!" << std::endl;
		break;
	
	case GUARD:
		std::cout << "ScavTrap " BLUE << _name << RST " is now in " SPECIAL "Gate Keeper" RST " mode!" << std::endl;
		break;
	
	default:
		break;
	}
}
