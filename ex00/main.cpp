/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dario <dario@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 22:57:17 by dario             #+#    #+#             */
/*   Updated: 2025/09/07 19:46:30 by dario            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	clap;
	ClapTrap	chibi("chibi-robo");

	chibi.attack("pringao");
	chibi.printStatus();
	chibi.takeDamage(5);
	chibi.printStatus();
	chibi.beRepaired(5);
	chibi.printStatus();

	clap.attack("pringao");
	clap.takeDamage(5);
	clap.beRepaired(5);
}