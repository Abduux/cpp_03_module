/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahraich <ahraich@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 05:26:26 by ahraich           #+#    #+#             */
/*   Updated: 2024/12/21 21:16:42 by ahraich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP
#define SCAVTRAP

#include "ClapTrap.h"


class ScavTrap : virtual public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(std::string name); // default constructor
        ~ScavTrap(); // default destructor 
        ScavTrap(const ScavTrap& other); // copy constructor
        ScavTrap& operator=(const ScavTrap& other); // copy assignment operator

        //member function 
        void attack(const std::string& target);
        void guardGate();
};

#endif