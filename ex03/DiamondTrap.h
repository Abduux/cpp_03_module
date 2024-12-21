/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahraich <ahraich@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 16:47:23 by ahraich           #+#    #+#             */
/*   Updated: 2024/12/21 19:57:16 by ahraich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.h"
#include "ScavTrap.h"


class DiamondTrap : public FragTrap , public ScavTrap 
{
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
};


