/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahraich <ahraich@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 03:04:40 by ahraich           #+#    #+#             */
/*   Updated: 2024/12/21 09:30:41 by ahraich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScavTrap.h"

int main ()
{
    std::cout << "\n=== Testing ScavTrap Construction/Destruction ===" << std::endl;
    {
        std::cout << "\nCreating ScavTrap 'Guardian'" << std::endl;
        ScavTrap guardian("Guardian");
        // Destructor will be called automatically at end of scope
    }

    std::cout << "\n=== Testing Basic ScavTrap Functionality ===" << std::endl;
    ScavTrap robot1("Robot1");
    ScavTrap robot2("Robot2");

    // Test initial stats
    std::cout << "\n>> Testing initial stats (should be HP:100, EP:50, AD:20)" << std::endl;
    robot1.printStats();  // You'll need to add this member function

    // Test attack
    std::cout << "\n>> Testing attack functionality" << std::endl;
    robot1.attack("Target Dummy");
    robot2.takeDamage(20);  // Take damage from Robot1's attack

    // Test taking damage
    std::cout << "\n>> Testing damage taking" << std::endl;
    robot1.takeDamage(30);
    robot1.printStats();  // Should show reduced HP

    // Test repair
    std::cout << "\n>> Testing repair functionality" << std::endl;
    robot1.beRepaired(15);
    robot1.printStats();  // Should show increased HP

    // Test Guard Gate special ability
    std::cout << "\n>> Testing Guard Gate mode" << std::endl;
    robot1.guardGate();

    // Test energy points depletion
    std::cout << "\n>> Testing energy points depletion" << std::endl;
    for (int i = 0; i < 50; ++i) {  // More than available energy points
        std::cout << "Attack #" << i + 1 << ": ";
        robot1.attack("Target");
    }

    // Test zero HP behavior
    std::cout << "\n>> Testing zero HP behavior" << std::endl;
    ScavTrap robot3("Robot3");
    robot3.takeDamage(100);  // Brings HP to 0
    robot3.attack("Target");  // Should fail
    robot3.beRepaired(10);   // Should fail
    robot3.guardGate();      // Should fail

    // Test copy constructor and assignment operator
    std::cout << "\n=== Testing Copy Operations ===" << std::endl;
    ScavTrap original("Original");
    original.takeDamage(30);  // Reduce HP to test if state is copied

    std::cout << "\n>> Testing copy constructor" << std::endl;
    ScavTrap copied(original);
    copied.printStats();  // Should show same reduced HP as original

    std::cout << "\n>> Testing assignment operator" << std::endl;
    ScavTrap assigned("Assigned");
    assigned = original;
    assigned.printStats();  // Should show same reduced HP as original

    return 0;
}