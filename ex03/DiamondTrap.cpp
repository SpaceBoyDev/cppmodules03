/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dario <dario@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 21:19:23 by dario             #+#    #+#             */
/*   Updated: 2025/10/05 22:24:14 by dario            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap("default_clap_name"),
	ScavTrap(), FragTrap(), _name("default")
{
	this->_hitPts = FragTrap::_hitPts;
	this->_energyPts = ScavTrap::_energyPts;
	this->_attackDmg = FragTrap::_attackDmg;
	this->_trapType = DIAMONDTRAP;
	printMsg(ARRIVE, 0, "");
}

DiamondTrap::DiamondTrap(const std::string name) : ClapTrap(name + "_clap_name"),
	ScavTrap(), FragTrap(), _name(name)
{
	this->_hitPts = FragTrap::_hitPts;
	this->_energyPts = ScavTrap::_energyPts;
	this->_attackDmg = FragTrap::_attackDmg;
	this->_trapType = DIAMONDTRAP;
	printMsg(ARRIVE, 0, "");
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy): ClapTrap(copy),
	ScavTrap(copy), FragTrap(copy)
{
	this->_name = copy._name;
	this->_hitPts = copy._hitPts;
	this->_energyPts = copy._energyPts;
	this->_attackDmg = copy._attackDmg;
	this->_trapType = DIAMONDTRAP;
	printMsg(ARRIVE, 0, "");
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &copy)
{
	std::cout << "Copy operator called" << std::endl;
	if (this != &copy)
	{
		this->_name = copy._name;
		ClapTrap::_name = copy.ClapTrap::_name;
		this->_hitPts = copy._hitPts;
		this->_energyPts = copy._energyPts;
		this->_attackDmg = copy._attackDmg;
	}
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	printMsg(DESTROY, 0, "");
}

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void)
{
	printMsg(WHOAMI, 0, "");
}

void DiamondTrap::printMsg(e_action action, const unsigned int amount, const std::string &target)
{
	switch (action)
	{
	case ARRIVE:
		std::cout << BG_GREEN << this->_trapType << BLUE << _name << RST BG_GREEN " has DIAarrived!" RST << std::endl;
		break;

	case DESTROY:
		std::cout << BG_GREEN << this->_trapType << BLUE << _name << RST BG_GREEN " DIAleaves!" RST << std::endl;
		break;

	case ATTACK:
		std::cout << this->_trapType << BLUE << _name << RST " " BG_RED "DIAattacked" RST " " RED
				  << target << RST "! He did " << _attackDmg << " hit points of damage." << std::endl;
		break;

	case TAKEDMG:
		std::cout << this->_trapType << BLUE << _name << RST " " BG_YELLOW "received" RST " " << amount << " hit points of damage." << std::endl;
		break;

	case REPAIR:
		std::cout << this->_trapType << BLUE << _name << RST " " BG_MAGENTA "repaired himself" RST " " << amount << " hit points!" << std::endl;
		break;

	case GUARD:
		std::cout << this->_trapType << BLUE << _name << RST " is now in " SPECIAL "Gate Keeper" RST " mode!" << std::endl;
		break;

	case HIGHFIVE:
		std::cout << this->_trapType << BLUE << _name << RST " displayed a " SPECIAL "HIGH FIVE" RST " request!" << std::endl;
		break;
	case WHOAMI:
		std::cout << "DiamondTrap name: " << this->_name << ", ClapTrap name: " << ClapTrap::_name << std::endl;
		break;
	default:
		break;
	}
}
