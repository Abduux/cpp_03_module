/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahraich <ahraich@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 23:51:47 by ahraich           #+#    #+#             */
/*   Updated: 2024/12/21 09:45:40 by ahraich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

void ClapTrap::attack(const std::string& target) 
{
    if(Hit_points <= 0 || Energy_points <= 0)
    {
        std::cout << "ClapTrap " << name << " can't attack.\n";
        return ;
    }
    this->Energy_points--;
    std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->Attack_damage << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) // repaire member function 
{
    if(Hit_points <= 0 || Energy_points <= 0)
    {
        std::cout << "ClapTrap " << name << " can't repair itself.\n";
        return ;
    }
    this->Hit_points += amount;
    this->Energy_points --;
    std::cout << "ClapTrap " << this->name << " Hit points increased by " << amount << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if(amount >= this->Hit_points)
        this->Hit_points = 0;
    else
        this->Hit_points -= amount;
    std::cout << "ClapTrap " << name << " takes " << amount << " points of damage. Remaining HP: " << this->Hit_points << ".\n";
}

void ClapTrap::printStats()
{
    std::cout << "--------" << std::endl;
    std::cout << "ScavTrap " << name 
              << " status - HP: " << Hit_points 
              << ", EP: " << Energy_points 
              << ", AD: " << Attack_damage << std::endl;
    std::cout << "--------" << std::endl;
}

ClapTrap::ClapTrap(std::string _name):name(_name), Hit_points(10), Energy_points(10), Attack_damage(0){std::cout << "ClapTrap " << name << " constructed.\n";}


ClapTrap::ClapTrap()
    :name("Uknown"), Hit_points(10), Energy_points(10), Attack_damage(0)
{
    std::cout << "ClapTrap " << name << " is constructed Without a name\n";
}

ClapTrap::~ClapTrap() {std::cout << "ClapTrap " << this->name << " destroyed.\n";} // default destructor

ClapTrap::ClapTrap(const ClapTrap &other) // copy constructor
    : name(other.name),Hit_points(other.Hit_points), Energy_points(other.Energy_points), Attack_damage(other.Attack_damage){std::cout << "ClapTrap " << name << " Copy constructed.\n";}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) // copy assignment operator overload
{
    if(this == &other)
        return (*this);

    this->Hit_points = other.Hit_points;
    this->Energy_points = other.Energy_points;
    this->Attack_damage = other.Attack_damage;
    this->name = other.name;

    return *this;
}
