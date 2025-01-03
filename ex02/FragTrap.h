/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahraich <ahraich@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 05:26:26 by ahraich           #+#    #+#             */
/*   Updated: 2024/12/21 20:00:55 by ahraich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.h"


class FragTrap : public ClapTrap
{
    public:
        FragTrap();
        FragTrap(std::string name); // default constructor
        ~FragTrap(); // default destructor 
        FragTrap(const FragTrap& other); // copy constructor
        FragTrap& operator=(const FragTrap& other); // copy assignment operator

        //special function 
        void highFivesGuys();
};

#endif