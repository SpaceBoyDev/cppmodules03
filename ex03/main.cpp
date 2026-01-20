/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dario <dario@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 22:57:17 by dario             #+#    #+#             */
/*   Updated: 2026/01/20 18:35:06 by dario            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
	ClapTrap clap;
	ClapTrap mamon("mamon");

	ScavTrap scav;
	ScavTrap maton("maton");

	FragTrap flag;
	FragTrap cabron("cabron");

	// DiamondTrap diamond;
	DiamondTrap	bomba("bomba");
	// DiamondTrap pesao(bomba);

	// pesao.attack("pringao");
	// pesao.printStatus();
	// pesao.takeDamage(5);
	// pesao.printStatus();
	// pesao.beRepaired(5);
	// pesao.printStatus();
	bomba.whoAmI();
	bomba.printStatus();
	// pesao.whoAmI();

	// scav.attack("pringao");
	// scav.printStatus();
	// scav.takeDamage(5);
	// scav.printStatus();
	// scav.beRepaired(5);
	// scav.printStatus();
	// scav.guardGate();

	// maton.attack("pringao");
	// maton.printStatus();
	// maton.takeDamage(5);
	// maton.printStatus();
	// maton.beRepaired(5);
	// maton.printStatus();
	// maton.guardGate();

	// flag.attack("pringao");
	// flag.printStatus();
	// flag.takeDamage(5);
	// flag.printStatus();
	// flag.beRepaired(5);
	// flag.printStatus();
	// flag.highFivesGuys();

	// cabron.attack("pringao");
	// cabron.printStatus();
	// cabron.takeDamage(5);
	// cabron.printStatus();
	// cabron.beRepaired(5);
	// cabron.printStatus();
	// cabron.highFivesGuys();
}