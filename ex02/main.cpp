/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 13:03:38 by bsouhar           #+#    #+#             */
/*   Updated: 2023/12/01 14:23:11 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
    try {
        Bureaucrat a("badr", 10);
        Form b("bac", 15, 4);
        std::cout << b << std::endl;
        b.beSigned(a);
        std::cout << b << std::endl;
    }
    catch(std::exception & e) {
        std::cout << e.what() << std::endl;
    }
}