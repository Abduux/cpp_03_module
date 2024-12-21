/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahraich <ahraich@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 06:11:14 by ahraich           #+#    #+#             */
/*   Updated: 2024/12/21 06:23:54 by ahraich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class vec3 {
    protected:
        int y = 2;
    public:
        int z = 3;
};


class point : protected vec3 {};


class pointv2 : public point {

    public :
        void getpoints()
        {
            std::cout << "protected:" << y;
            std::cout << "public   :" << z;
        }
};

int main ()
{
    pointv2 p;
    p.getpoints();
   std::cout << p.z;
}