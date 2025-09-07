/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dario <dario@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 21:19:22 by dario             #+#    #+#             */
/*   Updated: 2025/09/07 21:29:22 by dario            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAGTRAP_HPP
# define FLAGTRAP_HPP

# include "ScavTrap.hpp"

class FlagTrap : public ClapTrap
{
	public:
	FlagTrap(void);
	FlagTrap(const std::string name);
	FlagTrap(const FlagTrap &copy);
	FlagTrap	&operator = (const FlagTrap &copy);

	~FlagTrap();

	void	attack(const std::string &target);
	void	highFivesGuys(void);
	void	printMsg(e_action action, const unsigned int amount,
				const std::string &target);

	private:
};

#endif