/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahraich <ahraich@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 05:26:26 by ahraich           #+#    #+#             */
/*   Updated: 2024/12/21 21:16:33 by ahraich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"


class FragTrap : virtual public ClapTrap
{
    public:
        FragTrap(); //default
        FragTrap(std::string name); // constructor
        ~FragTrap(); // default destructor 
        FragTrap(const FragTrap& other); // copy constructor
        FragTrap& operator=(const FragTrap& other); // copy assignment operator

        //special function 
        void highFivesGuys();
};

