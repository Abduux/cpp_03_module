/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahraich <ahraich@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 05:26:22 by ahraich           #+#    #+#             */
/*   Updated: 2024/12/21 16:09:20 by ahraich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.h"

ScavTrap& ScavTrap::operator=(const ScavTrap& other) // copy assignment operator 
{
    if(this == &other)
        return *this;
    this->name = other.name;
    this->Hit_points = other.Hit_points;
    this->Energy_points = other.Energy_points;
    this->Attack_damage = other.Attack_damage;
    std::cout << "Copy assignment operator called\n";
    return *this;
}

ScavTrap::ScavTrap(std::string _name): ClapTrap(_name) // default constructor 
{
    Hit_points = 100;
    Energy_points = 50;
    Attack_damage = 20;
    std::cout << "ScavTrap " << name << " constructed.\n";
}

ScavTrap::ScavTrap() // default constructor 
{
    this->name = "Uknown";
    Hit_points = 100;
    Energy_points = 50;
    Attack_damage = 20;
    std::cout << "ScavTrap " << name << " is constructed Without a name\n";
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) // copy constructor
{
    std::cout << "ScavTrap " << name << " Copy constructed.\n";
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << this->name << " destroyed.\n";
}

void ScavTrap::guardGate()
{
    if(Hit_points <= 0 || Energy_points <= 0)
    {
        std::cout << "ScavTrap " << name << " can't Guard.\n";
        return ;
    }
    this->Energy_points--;
    std::cout<< "ScavTrap "<< name << " is now in Gate keeper mode." << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
    if(Hit_points <= 0 || Energy_points <= 0)
    {
        std::cout << "ScavTrap " << name << " can't attack.\n";
        return ;
    }
    this->Energy_points--;
    std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->Attack_damage << " points of damage!" << std::endl;
}
