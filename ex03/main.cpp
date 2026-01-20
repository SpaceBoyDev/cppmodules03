/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dario <dario@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 22:57:17 by dario             #+#    #+#             */
/*   Updated: 2026/01/20 18:45:27 by dario            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
	ClapTrap clap;
	ClapTrap chibi("chibi");

	ScavTrap scav;
	ScavTrap glados("glados");

	FragTrap frag;
	FragTrap gpt("GPT");

	DiamondTrap diamond;
	DiamondTrap	bomb("bomb");
	DiamondTrap pesao(bomb);

	pesao.attack("roboto");
	pesao.printStatus();
	pesao.takeDamage(5);
	pesao.printStatus();
	pesao.beRepaired(5);
	pesao.printStatus();
	bomb.whoAmI();
	bomb.printStatus();
	pesao.whoAmI();

	scav.attack("roboto");
	scav.printStatus();
	scav.takeDamage(5);
	scav.printStatus();
	scav.beRepaired(5);
	scav.printStatus();
	scav.guardGate();

	glados.attack("roboto");
	glados.printStatus();
	glados.takeDamage(5);
	glados.printStatus();
	glados.beRepaired(5);
	glados.printStatus();
	glados.guardGate();

	frag.attack("roboto");
	frag.printStatus();
	frag.takeDamage(5);
	frag.printStatus();
	frag.beRepaired(5);
	frag.printStatus();
	frag.highFivesGuys();

	gpt.attack("roboto");
	gpt.printStatus();
	gpt.takeDamage(5);
	gpt.printStatus();
	gpt.beRepaired(5);
	gpt.printStatus();
	gpt.highFivesGuys();
}