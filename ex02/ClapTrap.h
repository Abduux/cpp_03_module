/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahraich <ahraich@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 23:52:03 by ahraich           #+#    #+#             */
/*   Updated: 2024/12/21 09:19:04 by ahraich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>

class  ClapTrap
{
    protected:

        std::string     name;
        unsigned int    Hit_points;
        unsigned int    Energy_points;
        unsigned int    Attack_damage;

    public:
        //constructors & destructors. 
        ClapTrap();
        ClapTrap(std::string name);
        ~ ClapTrap();
        ClapTrap(const ClapTrap& other);
        ClapTrap& operator=(const ClapTrap& other);

        //member function 
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void printStats();
};

#endif