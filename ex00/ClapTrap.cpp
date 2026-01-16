/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darmarti <darmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 20:18:47 by dario             #+#    #+#             */
/*   Updated: 2026/01/16 18:26:11 by darmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
	: _name("ClapTrap"), _hitPts(10), _energyPts(10), _attackDmg(0)
{
	std::cout << "ClapTrap " << _name << " default constructor\n";
}

ClapTrap::ClapTrap(std::string name)
	: _name(name), _hitPts(10), _energyPts(10), _attackDmg(0)
{
	std::cout << "ClapTrap " << _name << " name constructor\n";
}

ClapTrap::ClapTrap(ClapTrap &copy)
{
	this->_name = copy._name;
	this->_hitPts = copy._hitPts;
	this->_energyPts = copy._energyPts;
	this->_attackDmg = copy._attackDmg;
	std::cout << "ClapTrap " << _name << " copy constructor\n";

}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy)
{
	if (this != &copy)
	{
		this->_name = copy._name;
		this->_hitPts = copy._hitPts;
		this->_energyPts = copy._energyPts;
		this->_attackDmg = copy._attackDmg;
		std::cout << "ClapTrap " << _name << " equal operator\n";
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << " has been destroyed\n";
}

void ClapTrap::attack(const std::string &target)
{
	if (this->_energyPts <= 0 || this->_hitPts <= 0)
	{
		std::cout << "ClapTrap " << _name << " can't attack\n";
		return ;
	}
	this->_energyPts--;
	std::cout << "ClapTrap " << _name << " attacks " << target
		<< ", causing " << this->_attackDmg << " points of damage!\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->_hitPts -= amount;
	std::cout << "ClapTrap " << _name << " takes " << amount
		<< " points of damage!\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPts <= 0 || this->_hitPts <= 0)
	{
		std::cout << "ClapTrap " << _name << " can't repair himself\n";
		return ;
	}
	this->_energyPts--;
	this->_hitPts += amount;
	std::cout << "ClapTrap " << _name << " repairs himself " << amount
		<< " hit points!\n";
}

void ClapTrap::printStatus(void)
{
	std::cout << "\n----"<< this->_name << " current status----" << std::endl
		<< "Current Hit Points: " << this->_hitPts << std::endl
		<< "Current Energy Points: " << this->_energyPts << std::endl
		<< "---------------------------------\n\n";
}
