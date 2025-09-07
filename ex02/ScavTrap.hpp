/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dario <dario@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 19:49:52 by dario             #+#    #+#             */
/*   Updated: 2025/09/07 21:29:02 by dario            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
	ScavTrap(void);
	ScavTrap(const std::string name);
	ScavTrap(const ScavTrap &copy);
	ScavTrap	&operator = (const ScavTrap &copy);

	~ScavTrap();

	void	attack(const std::string &target);
	void	guardGate(void);
	void	printMsg(e_action action, const unsigned int amount,
				const std::string &target);

	private:
	
};

#endif