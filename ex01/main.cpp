/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 13:03:38 by bsouhar           #+#    #+#             */
/*   Updated: 2023/11/30 13:13:33 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
    try {
        Bureaucrat("badr", 15); 
        Bureaucrat a;
        Form b;
        // std::cout << a << std::endl;
        // a.setGrade(1500);
        // std::cout << a << std::endl;
        // Bureaucrat(-1); 
        // Bureaucrat b("anass");
        // b.setGrade(150);
        // b.gradeIncrement();
        // b.gradeDecrement();
        // b.gradeDecrement();
    }
    catch(std::exception & e) {
        std::cout << e.what() << std::endl;
    }
}