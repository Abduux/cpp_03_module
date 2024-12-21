/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahraich <ahraich@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 16:47:23 by ahraich           #+#    #+#             */
/*   Updated: 2024/12/21 21:19:13 by ahraich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_H
#define DIAMONDTRAP_H

#include "FragTrap.h"
#include "ScavTrap.h"


class DiamondTrap : public FragTrap , public ScavTrap 
{
    private:
        std::string name;
    public:
        // constructors
        DiamondTrap(); // default 
        DiamondTrap(std::string name); // name
        DiamondTrap(const DiamondTrap& other); // copy 
        DiamondTrap& operator=(const DiamondTrap &other); // copy assignment 
        
        //destructor  
        ~DiamondTrap(); // Default

         //special function 
         void whoAmI();
         void attack(const std::string& target);
};

DiamondTrap::DiamondTrap() :ClapTrap("Uknown_clap_name"), FragTrap("Uknown_clap_name"), ScavTrap("Uknown_clap_name"), name("Uknown")
{
    this->Hit_points = FragTrap::Hit_points;
    this->Energy_points = ScavTrap::Energy_points;
    this->Attack_damage = FragTrap::Attack_damage;
    std::cout << "DiamondClap Constructed Without a name " << name << std::endl;
}

DiamondTrap::DiamondTrap(std::string _name)
    :ClapTrap(_name + "_clap_name"), FragTrap(_name+ "_clap_name"), ScavTrap(_name+ "_clap_name"), name(_name)
{
    this->Hit_points = FragTrap::Hit_points;
    this->Energy_points = ScavTrap::Energy_points;
    this->Attack_damage = FragTrap::Attack_damage;
    std::cout << "DiamondClap Constructed\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap& other):ClapTrap(other), FragTrap(other), ScavTrap(other) // copy constructor
{
    *this = other;
    std::cout << "DiamondTrap Copy Constructor called\n";
}


DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap Destroyed\n";
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &other) // assignment operator
{
    if(this == &other)
        return *this;
    this->name = other.name;
    this->Hit_points = other.Hit_points;
    this->Energy_points = other.Energy_points;
    this->Attack_damage = other.Attack_damage;
    std::cout << "DiamonTrap Copy Assignment called\n";
    return *this;
}


void DiamondTrap::whoAmI()
{
    std::cout << "DiamonTrap named  : " << this->name << std::endl;
    std::cout << "ClapTrap named    : " << ClapTrap::name << std::endl;
    //do something...
}

void DiamondTrap::attack(const std::string &target)
{
    ScavTrap::attack(target);
} 

#endif