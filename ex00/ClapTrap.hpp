/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dario <dario@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 20:18:49 by dario             #+#    #+#             */
/*   Updated: 2025/09/04 22:07:10 by dario            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>

# define RST		"\033[0m"
# define RED		"\033[1;31m"
# define BLUE		"\033[1;34m"
# define GREEN		"\033[1;32m"
# define YELLOW		"\033[1;33m"

# define BG_RED		"\033[41m"
# define BG_GREEN	"\033[42m"
# define BG_YELLOW	"\033[43m"
# define BG_BLUE	"\033[44m"
# define BG_MAGENTA	"\033[45m"
# define BG_CYAN	"\033[46m"
# define BG_WHITE	"\033[47m"

enum e_status
{
	ARRIVE,
	DESTROY,
	ATTACK,
	TAKEDMG,
	REPAIR
};

class ClapTrap
{
	public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(ClapTrap &copy);
	ClapTrap	&operator = (const ClapTrap &copy);
	
	~ClapTrap();

	void	attack(const std::string &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	void	printMsg(e_status status, const unsigned int amount, const std::string &target);

	private:
	std::string	_name;
	int			_hitPts;
	int			_energyPts;
	int			_attackDmg;
};

#endif