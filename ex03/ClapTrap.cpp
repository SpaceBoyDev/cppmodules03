/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dario <dario@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 20:18:47 by dario             #+#    #+#             */
/*   Updated: 2025/09/07 21:06:31 by dario            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
	: _name("ClapTrap"), _hitPts(10), _energyPts(10), _attackDmg(0), _trapType(CLAPTRAP)
{
	printMsg(ARRIVE, 0, "");
}

ClapTrap::ClapTrap(const std::string name)
	: _name(name), _hitPts(10), _energyPts(10), _attackDmg(0), _trapType(CLAPTRAP)
{
	printMsg(ARRIVE, 0, "");
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	this->_name = copy._name;
	this->_hitPts = copy._hitPts;
	this->_energyPts = copy._energyPts;
	this->_attackDmg = copy._attackDmg;
	this->_trapType = copy._trapType;
	printMsg(ARRIVE, 0, "");
}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy)
{
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

ClapTrap::~ClapTrap()
{
	printMsg(DESTROY, 0, "");
}

void ClapTrap::attack(const std::string &target)
{
	this->_energyPts--;
	printMsg(ATTACK, 0, target);
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->_hitPts -= amount;
	printMsg(TAKEDMG, amount, "");
}

void ClapTrap::beRepaired(unsigned int amount)
{
	this->_energyPts--;
	this->_hitPts += amount;
	printMsg(REPAIR, amount, "");
}

void ClapTrap::printStatus(void)
{
	std::cout << "----"<< this->_name << " current status----" << std::endl
		<< "Current Hit Points: " << this->_hitPts << std::endl
		<< "Current Energy Points: " << this->_energyPts << std::endl;
}

void ClapTrap::printMsg(e_action action, const unsigned int amount,
	const std::string &target)
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
		std::cout << this->_trapType << BLUE << _name << RST " " BG_RED "attacked" RST " " RED
			<< target << RST "! He did " << _attackDmg << " hit points of damage." << std::endl;
		break;

	case TAKEDMG:
		std::cout << this->_trapType << BLUE << _name << RST " " BG_YELLOW "received" RST " " << amount << " hit points of damage." << std::endl;
		break;

	case REPAIR:
		std::cout << this->_trapType << BLUE << _name << RST " " BG_MAGENTA "repaired himself" RST " " << amount << " hit points!" << std::endl;
		break;

	default:
		break;
	}
}
