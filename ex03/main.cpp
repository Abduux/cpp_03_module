/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahraich <ahraich@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 03:04:40 by ahraich           #+#    #+#             */
/*   Updated: 2024/12/21 21:32:43 by ahraich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "DiamondTrap.h"

int main()
{
    // Test 1: Default Constructor
    DiamondTrap defaultTrap;
    defaultTrap.whoAmI();
    defaultTrap.attack("Zombie");

    std::cout << "\n--------------------\n";

    // Test 2: Parameterized Constructor
    DiamondTrap namedTrap("Diamond");
    namedTrap.whoAmI();
    namedTrap.attack("Skeleton");

    std::cout << "\n--------------------\n";

    // Test 3: Copy Constructor
    DiamondTrap copyTrap(namedTrap);
    copyTrap.printStats();
    std::cout << "\n--------------------\n";
    copyTrap.whoAmI();
    std::cout << "\n--------------------\n";
    copyTrap.attack("Ghoul");
    std::cout << "\n--------------------\n";
    copyTrap.beRepaired(120);
    std::cout << "\n--------------------\n";
    copyTrap.guardGate();
    std::cout << "\n--------------------\n";
    copyTrap.highFivesGuys();
    std::cout << "\n--------------------\n";
    copyTrap.printStats();

    // Test 5: Destructor (automatic when objects go out of scope)
    // No explicit test required—observe destructor messages
    return 0;
}
