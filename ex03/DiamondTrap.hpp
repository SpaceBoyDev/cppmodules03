/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dario <dario@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 21:19:22 by dario             #+#    #+#             */
/*   Updated: 2025/10/05 22:05:51 by dario            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAGTRAP_HPP
#define FLAGTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	public:
	DiamondTrap(void);
	DiamondTrap(const std::string name);
	DiamondTrap(const DiamondTrap &copy);
	DiamondTrap &operator=(const DiamondTrap &copy);

	~DiamondTrap();

	void 	attack(const std::string &target);
	void	whoAmI(void);
	void 	printMsg(e_action action, const unsigned int amount,
				const std::string &target);

	private:
	std::string	_name;
};

#endif