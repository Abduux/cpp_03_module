/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahraich <ahraich@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 05:26:26 by ahraich           #+#    #+#             */
/*   Updated: 2024/12/21 20:00:39 by ahraich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.h"


class ScavTrap : public ClapTrap
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