/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dario <dario@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 20:18:47 by dario             #+#    #+#             */
/*   Updated: 2025/09/04 22:07:31 by dario            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
	: _name("ClapTrap"), _hitPts(10), _energyPts(10), _attackDmg(0)
{
	printMsg(ARRIVE, 0, "");
}

ClapTrap::ClapTrap(std::string name)
	: _name(name), _hitPts(10), _energyPts(10), _attackDmg(0)
{
	printMsg(ARRIVE, 0, "");
}

ClapTrap::ClapTrap(ClapTrap &copy)
{
	this->_name = copy._name;
	this->_hitPts = copy._hitPts;
	this->_energyPts = copy._energyPts;
	this->_attackDmg = copy._attackDmg;
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

void ClapTrap::printMsg(e_status status, const unsigned int amount, const std::string &target)
{
	switch (status)
	{
	case ARRIVE:
		std::cout << BG_GREEN "ClapTrap " BLUE << _name << RST BG_GREEN " has arrived!" RST << std::endl;
		break;

	case DESTROY:
		std::cout << BG_GREEN "ClapTrap " BLUE << _name << RST BG_GREEN " leaves!" RST << std::endl;
		break;

	case ATTACK:
		std::cout << "ClapTrap " BLUE << _name << RST " " BG_RED "attacked" RST " " RED
			<< target << RST "! He did " << _attackDmg << " hit points of damage." << std::endl;
		break;

	case TAKEDMG:
		std::cout << "ClapTrap " BLUE << _name << RST " " BG_YELLOW "received" RST " " << amount << " hit points of damage." << std::endl;
		std::cout << "Current HitPts: " << _hitPts << std::endl;
		break;

	case REPAIR:
		std::cout << "ClapTrap " BLUE << _name << RST " " BG_MAGENTA "repaired himself" RST " " << amount << " hit points!" << std::endl;
		std::cout << "Current HitPts: " << _hitPts << std::endl;
		break;

	default:
		break;
	}
}
