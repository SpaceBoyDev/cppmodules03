/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dario <dario@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 22:57:17 by dario             #+#    #+#             */
/*   Updated: 2025/09/07 20:42:10 by dario            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	scav;
	ScavTrap	maton("maton");

	scav = maton;

	scav.attack("pringao");
	scav.printStatus();
	scav.takeDamage(5);
	scav.printStatus();
	scav.beRepaired(5);
	scav.printStatus();
	scav.guardGate();

	maton.attack("pringao");
	maton.printStatus();
	maton.takeDamage(5);
	maton.printStatus();
	maton.beRepaired(5);
	maton.printStatus();
	maton.guardGate();
}