/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahraich <ahraich@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 03:04:40 by ahraich           #+#    #+#             */
/*   Updated: 2024/12/21 09:42:56 by ahraich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "ClapTrap.h"

// int main ()
// {
//     ClapTrap clap("Clappy");

//     clap.attack("target1"); // // ENERGY -1
    
//     clap.takeDamage(3); //HP -3
//     clap.takeDamage(3); //HP -3
//     clap.beRepaired(5); //HP +5 // ENERGY -1
//     clap.beRepaired(5); //HP +5 // ENERGY -1
//     clap.beRepaired(1); //HP +1 // ENERGY -1
//     clap.takeDamage(3); //HP -3

//     clap.displayStats();
//     //EXPECTED :
//     //HP        : 10 -3 -3 +5 +5 +1 -3 = 12
//     //ENERGY    : 6
    
//     for(int i = 0 ; i < 10 ; i++)
//         clap.attack("TARGET"); // ENERGY (-1 x 10) STOPS AT 0
//         //WILL ONLY ATTACK 6 TIMES (ENERGY POINTS)
        

//     clap.beRepaired(5); // SHOULD NOT REPAIR
//     clap.displayStats(); // EXPECTED HP 12 , ENERGY 0
//     return 0;
// }

#include <iostream>
#include "ClapTrap.h"

int main() {
    // Test Case 1: Constructor and Destructor Messages
    {
        std::cout << "=== Test Case 1: Constructor and Destructor Messages ===" << std::endl;
        ClapTrap robot("Clappy");
    }
    std::cout << std::endl;

    // Test Case 2: Attack Function
    {
        std::cout << "=== Test Case 2: Attack Function ===" << std::endl;
        ClapTrap robot("Clappy");
        robot.attack("Zombie");
    }
    std::cout << std::endl;

    // Test Case 3: Take Damage
    {
        std::cout << "=== Test Case 3: Take Damage ===" << std::endl;
        ClapTrap robot("Clappy");
        robot.takeDamage(5);
        robot.displayStats();
    }
    std::cout << std::endl;

    // Test Case 4: Be Repaired
    {
        std::cout << "=== Test Case 4: Be Repaired ===" << std::endl;
        ClapTrap robot("Clappy");
        robot.beRepaired(3);
        robot.displayStats();
    }
    std::cout << std::endl;

    // Test Case 5: Out of Energy
    {
        std::cout << "=== Test Case 5: Out of Energy ===" << std::endl;
        ClapTrap robot("Clappy");
        for (int i = 0; i < 11; ++i) {
            robot.attack("Zombie");
        }
        robot.displayStats();
    }
    std::cout << std::endl;

    // Test Case 6: Out of Hit Points
    {
        std::cout << "=== Test Case 6: Out of Hit Points ===" << std::endl;
        ClapTrap robot("Clappy");
        robot.takeDamage(15);
        robot.attack("Zombie");
        robot.beRepaired(5);
        robot.displayStats();
    }
    std::cout << std::endl;

    // Test Case 7: Edge Cases for Damage and Repair
    {
        std::cout << "=== Test Case 7: Edge Cases for Damage and Repair ===" << std::endl;
        ClapTrap robot("Clappy");
        robot.takeDamage(-5);
        robot.beRepaired(-3);
        robot.displayStats();
    }
    std::cout << std::endl;

    return 0;
}
