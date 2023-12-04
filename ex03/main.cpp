/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 13:03:38 by bsouhar           #+#    #+#             */
/*   Updated: 2023/12/04 17:20:50 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main() {
    try {
        Bureaucrat ab("badr", 10);
        ShrubberyCreationForm a("badr");
        a.execute(ab);
    }
    catch(std::exception & e) {
        std::cout << e.what() << std::endl;
    }
}