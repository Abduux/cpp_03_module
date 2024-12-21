/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahraich <ahraich@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 05:26:22 by ahraich           #+#    #+#             */
/*   Updated: 2024/12/21 19:56:34 by ahraich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.h"

FragTrap& FragTrap::operator=(const FragTrap& other) // copy assignment operator 
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

FragTrap::FragTrap(std::string _name): ClapTrap(_name) // default constructor()
{
    Hit_points = 100;
    Energy_points = 100;
    Attack_damage = 30;
    std::cout << "FragTrap " << name << " constructed.\n";
}

FragTrap::FragTrap() // default constructor 
{
    this->name = "Uknown";
    Hit_points = 100;
    Energy_points = 100;
    Attack_damage = 30;
    std::cout << "FragTrap " << name << " is constructed Without a name\n";
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) // copy constructor
{
    std::cout << "FragTrap " << name << " Copy constructed.\n";
}


FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << this->name << " destroyed.\n";
}

void FragTrap::highFivesGuys()
{
    if(Hit_points <= 0 || Energy_points <= 0)
    {
        std::cout << "FragTrap " << name << " can't High Five.\n";
        return ;
    }
    this->Energy_points--;
    std::cout<< "FragTrap "<< name << " is requesting a High Five" << std::endl;
}
