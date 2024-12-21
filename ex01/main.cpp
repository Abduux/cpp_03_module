/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahraich <ahraich@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 03:04:40 by ahraich           #+#    #+#             */
/*   Updated: 2024/12/21 09:13:25 by ahraich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScavTrap.h"

int main ()
{
    ScavTrap a("A"); // get created with 
    ScavTrap b("B");
    
    a.displayStats();
    b.displayStats();
    


    a.attack("Target1");
    b.attack("Target2");
    
    a.beRepaired(10);
    b.beRepaired(22);

    a.takeDamage(20);
    b.takeDamage(40);
    
    a.guardGate();
    b.guardGate();

    // a.takeDamage(100);
    // b.takeDamage(100);
    

    a.guardGate();
    b.guardGate();
    // show stats
    
    a.displayStats();
    b.displayStats();
}