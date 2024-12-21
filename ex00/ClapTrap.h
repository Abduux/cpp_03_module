/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahraich <ahraich@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 23:52:03 by ahraich           #+#    #+#             */
/*   Updated: 2024/12/21 02:12:11 by ahraich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>


class  ClapTrap
{
    private:
        std::string name;
        int Hit_points = 10;
        int Energy_points = 10;
        int Attack_damage = 10;
        /* data */
    public:
        ClapTrap(std::string name);
        ~ ClapTrap();

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void getName() const ;
        void setName() const ;
};





void ClapTrap::attack(const std::string& target)
{
    std::cout << "ClapTrap" << this->name << "attacks" << target << ", causing <damage> points of damage!"
}








 ClapTrap:: ClapTrap(std::string name)
{
    std::cout << "constructor called" << std::endl;
}

 ClapTrap::~ ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}


#endif