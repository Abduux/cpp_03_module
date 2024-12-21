/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahraich <ahraich@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 03:04:40 by ahraich           #+#    #+#             */
/*   Updated: 2024/12/21 05:20:24 by ahraich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

int main ()
{
    ClapTrap clap("Clappy");

    clap.attack("target1"); // // ENERGY -1
    
    clap.takeDamage(3); //HP -3
    clap.takeDamage(3); //HP -3
    clap.beRepaired(5); //HP +5 // ENERGY -1
    clap.beRepaired(5); //HP +5 // ENERGY -1
    clap.beRepaired(1); //HP +1 // ENERGY -1
    clap.takeDamage(3); //HP -3

    clap.displayStats();
    //EXPECTED :
    //HP        : 10 -3 -3 +5 +5 +1 -3 = 12
    //ENERGY    : 6
    
    for(int i = 0 ; i < 10 ; i++)
        clap.attack("TARGET"); // ENERGY (-1 x 10) STOPS AT 0
        //WILL ONLY ATTACK 6 TIMES (ENERGY POINTS)
        

    clap.beRepaired(5); // SHOULD NOT REPAIR
    clap.displayStats(); // EXPECTED HP 12 , ENERGY 0
    return 0;
}