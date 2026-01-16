/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darmarti <darmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 22:57:17 by dario             #+#    #+#             */
/*   Updated: 2026/01/16 18:25:45 by darmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	clap;
	ClapTrap	chibi("chibi-robo");

	chibi.attack("pringao");
	chibi.attack("pringao");
	chibi.attack("pringao");
	chibi.attack("pringao");
	chibi.attack("pringao");
	chibi.attack("pringao");
	chibi.attack("pringao");
	chibi.attack("pringao");
	chibi.attack("pringao");
	chibi.attack("pringao");
	chibi.attack("pringao");
	chibi.printStatus();
	chibi.takeDamage(5);
	chibi.printStatus();
	chibi.beRepaired(5);

	clap.attack("pringao");
	clap.takeDamage(5);
	clap.beRepaired(5);

	clap.printStatus();
	chibi.printStatus();
	clap = chibi;
	clap.printStatus();
}