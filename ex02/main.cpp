/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dario <dario@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 22:57:17 by dario             #+#    #+#             */
/*   Updated: 2026/01/20 18:45:38 by dario            ###   ########.fr       */
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

	FragTrap frag;
	FragTrap gpt("GPT");

	scav.attack("roboto");
	scav.printStatus();
	scav.takeDamage(5);
	scav.printStatus();
	scav.beRepaired(5);
	scav.printStatus();
	scav.guardGate();

	llm.attack("roboto");
	llm.printStatus();
	llm.takeDamage(5);
	llm.printStatus();
	llm.beRepaired(5);
	llm.printStatus();
	llm.guardGate();

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