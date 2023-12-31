/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 14:27:49 by bsouhar           #+#    #+#             */
/*   Updated: 2023/12/06 17:32:13 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("",72, 45) {
    
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("",72, 45) , _target(target) {
    
}

RobotomyRequestForm::~RobotomyRequestForm() {
    
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy): AForm("RobotMyRequest", 72, 45), _target(copy._target) {
    std::cout << "copy constractor has been called" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& robotomyrequestform) {
    (void)robotomyrequestform;
    return *this;
}

void RobotomyRequestForm::executed(Bureaucrat const & executor) const {
    (void)executor;
    std::cout << "made a noise\n";
    int i = std::rand();
    std::cout << i << std::endl;
    if (i % 2 == 0) {
        std::cout << _target << " has been robotomizedn\n";
    } else {
        std::cout << _target << " robotomy failed\n";
    }
}