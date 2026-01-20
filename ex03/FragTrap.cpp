/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dario <dario@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 21:19:23 by dario             #+#    #+#             */
/*   Updated: 2026/01/20 18:00:42 by dario            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap("FragTrap")
{
	this->_hitPts = 100;
	this->_energyPts = 100;
	this->_attackDmg = 30;
	std::cout << "FragTrap " << _name << " default constructor\n";
}

FragTrap::FragTrap(const std::string name) : ClapTrap(name)
{
	this->_hitPts = 100;
	this->_energyPts = 100;
	this->_attackDmg = 30;
	std::cout << "FragTrap " << _name << " name constructor\n";
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap()
{
	this->_name = copy._name;
	this->_hitPts = copy._hitPts;
	this->_energyPts = copy._energyPts;
	this->_attackDmg = copy._attackDmg;
	std::cout << "FragTrap " << _name << " copy constructor\n";
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
		std::cout << "FragTrap " << _name << " equal operator\n";
	}
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << _name << " has been destroyed\n";
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap "<< _name << " displayed a HIGH FIVE REQUEST!\n";
}
