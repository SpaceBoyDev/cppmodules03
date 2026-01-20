/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dario <dario@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 21:19:23 by dario             #+#    #+#             */
/*   Updated: 2026/01/20 18:39:17 by dario            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap("default_clap_name"), _name("default")
{
	this->_hitPts = 100;
	this->_energyPts = 50;
	this->_attackDmg = 30;
	std::cout << "DiamondTrap " << _name << " default constructor\n";
}

DiamondTrap::DiamondTrap(const std::string name) : ClapTrap(name + "_clap_name"),
	ScavTrap(name + "_clap_name"), FragTrap(name + "_clap_name"), _name(name)
{
	this->_hitPts = 100;
	this->_energyPts = 50;
	this->_attackDmg = 30;
	std::cout << "DiamondTrap " << _name << " name constructor\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy): ClapTrap(copy),
	ScavTrap(copy), FragTrap(copy)
{
	this->_name = copy._name;
	this->_hitPts = copy._hitPts;
	this->_energyPts = copy._energyPts;
	this->_attackDmg = copy._attackDmg;
	std::cout << "DiamondTrap " << _name << " copy constructor\n";
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
		std::cout << "DiamondTrap " << _name << " equal operator\n";
	}
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << _name << " has been destroyed\n";
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap name: " << this->_name << ", ClapTrap name: " << ClapTrap::_name << std::endl;	
}
