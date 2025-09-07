/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dario <dario@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 21:19:23 by dario             #+#    #+#             */
/*   Updated: 2025/09/07 21:27:01 by dario            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FlagTrap.hpp"

FlagTrap::FlagTrap(void) : ClapTrap("FlagTrap")
{
	this->_hitPts = 100;
	this->_energyPts = 100;
	this->_attackDmg = 30;
	this->_trapType = FLAGTRAP;
	printMsg(ARRIVE, 0, "");
}

FlagTrap::FlagTrap(const std::string name) : ClapTrap(name)
{
	this->_hitPts = 100;
	this->_energyPts = 100;
	this->_attackDmg = 30;
	this->_trapType = FLAGTRAP;
	printMsg(ARRIVE, 0, "");
}

FlagTrap::FlagTrap(const FlagTrap &copy) : ClapTrap()
{
	this->_name = copy._name;
	this->_hitPts = copy._hitPts;
	this->_energyPts = copy._energyPts;
	this->_attackDmg = copy._attackDmg;
	this->_trapType = copy._trapType;
	printMsg(ARRIVE, 0, "");
}

FlagTrap &FlagTrap::operator=(const FlagTrap &copy)
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

FlagTrap::~FlagTrap()
{
	printMsg(DESTROY, 0, "");
}

void FlagTrap::attack(const std::string &target)
{
	this->_energyPts--;
	printMsg(ATTACK, 0, target);
}

void FlagTrap::highFivesGuys(void)
{
	printMsg(HIGHFIVE, 0, "");
}

void	FlagTrap::printMsg(e_action action, const unsigned int amount, const std::string &target)
{
	switch (action)
	{
	case ARRIVE:
		std::cout << BG_GREEN << this->_trapType << BLUE << _name << RST BG_GREEN " has FLAGarrived!" RST << std::endl;
		break;

	case DESTROY:
		std::cout << BG_GREEN << this->_trapType << BLUE << _name << RST BG_GREEN " FLAGleaves!" RST << std::endl;
		break;

	case ATTACK:
		std::cout << this->_trapType << BLUE << _name << RST " " BG_RED "FLAGattacked" RST " " RED
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