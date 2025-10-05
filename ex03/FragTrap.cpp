/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dario <dario@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 21:19:23 by dario             #+#    #+#             */
/*   Updated: 2025/10/05 22:07:19 by dario            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap("FragTrap")
{
	this->_hitPts = 100;
	this->_energyPts = 100;
	this->_attackDmg = 30;
	this->_trapType = FRAGTRAP;
	printMsg(ARRIVE, 0, "");
}

FragTrap::FragTrap(const std::string name) : ClapTrap(name)
{
	this->_hitPts = 100;
	this->_energyPts = 100;
	this->_attackDmg = 30;
	this->_trapType = FRAGTRAP;
	printMsg(ARRIVE, 0, "");
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap()
{
	this->_name = copy._name;
	this->_hitPts = copy._hitPts;
	this->_energyPts = copy._energyPts;
	this->_attackDmg = copy._attackDmg;
	this->_trapType = copy._trapType;
	printMsg(ARRIVE, 0, "");
}

FragTrap &FragTrap::operator=(const FragTrap &copy)
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

FragTrap::~FragTrap()
{
	printMsg(DESTROY, 0, "");
}

void FragTrap::attack(const std::string &target)
{
	this->_energyPts--;
	printMsg(ATTACK, 0, target);
}

void FragTrap::highFivesGuys(void)
{
	printMsg(HIGHFIVE, 0, "");
}

void FragTrap::printMsg(e_action action, const unsigned int amount, const std::string &target)
{
	switch (action)
	{
	case ARRIVE:
		std::cout << BG_GREEN << this->_trapType << BLUE << _name << RST BG_GREEN " has FRAGarrived!" RST << std::endl;
		break;

	case DESTROY:
		std::cout << BG_GREEN << this->_trapType << BLUE << _name << RST BG_GREEN " FRAGleaves!" RST << std::endl;
		break;

	case ATTACK:
		std::cout << this->_trapType << BLUE << _name << RST " " BG_RED "FRAGattacked" RST " " RED
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

	default:
		break;
	}
}