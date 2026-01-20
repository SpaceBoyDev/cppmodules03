/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dario <dario@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 22:57:17 by dario             #+#    #+#             */
/*   Updated: 2026/01/20 17:52:54 by dario            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	clap;
	ClapTrap	chibi("chibi-robo");

	chibi.attack("roboto");
	chibi.attack("roboto");
	chibi.attack("roboto");
	chibi.attack("roboto");
	chibi.attack("roboto");
	chibi.attack("roboto");
	chibi.attack("roboto");
	chibi.attack("roboto");
	chibi.attack("roboto");
	chibi.attack("roboto");
	chibi.attack("roboto");
	chibi.printStatus();
	chibi.takeDamage(5);
	chibi.printStatus();
	chibi.beRepaired(5);

	clap.attack("roboto");
	clap.takeDamage(5);
	clap.beRepaired(5);

	clap.printStatus();
	chibi.printStatus();
	clap = chibi;
	clap.printStatus();
}