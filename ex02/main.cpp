/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 13:03:38 by bsouhar           #+#    #+#             */
/*   Updated: 2023/12/04 08:14:20 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

int main() {
    try {
        Bureaucrat a("badr", 10);
        // AForm b("bac", 15, 4);
        // std::cout << b << std::endl;
        // b.beSigned(a);
        // std::cout << b << std::endl;
    }
    catch(std::exception & e) {
        std::cout << e.what() << std::endl;
    }
}