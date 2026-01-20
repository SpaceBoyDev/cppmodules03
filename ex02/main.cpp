/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dario <dario@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 22:57:17 by dario             #+#    #+#             */
/*   Updated: 2026/01/20 17:52:26 by dario            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap clap;
	ClapTrap glados("glados");

	ScavTrap scav;
	ScavTrap llm("LLM");

	FragTrap flag;
	FragTrap gpt("GPT");

	scav.attack("pringao");
	scav.printStatus();
	scav.takeDamage(5);
	scav.printStatus();
	scav.beRepaired(5);
	scav.printStatus();
	scav.guardGate();

	llm.attack("pringao");
	llm.printStatus();
	llm.takeDamage(5);
	llm.printStatus();
	llm.beRepaired(5);
	llm.printStatus();
	llm.guardGate();

	flag.attack("pringao");
	flag.printStatus();
	flag.takeDamage(5);
	flag.printStatus();
	flag.beRepaired(5);
	flag.printStatus();
	flag.highFivesGuys();

	gpt.attack("pringao");
	gpt.printStatus();
	gpt.takeDamage(5);
	gpt.printStatus();
	gpt.beRepaired(5);
	gpt.printStatus();
	gpt.highFivesGuys();
}