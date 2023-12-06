/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 14:27:49 by bsouhar           #+#    #+#             */
/*   Updated: 2023/12/06 15:16:54 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("",72, 45) {
    
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("",72, 45) , _target(target) {
    
}

RobotomyRequestForm::~RobotomyRequestForm() {
    
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy) {
    
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& robotomyrequestform) {
    
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) {
    if ((executor.getGrade() < this->getGradeEx()) && !this->getIndex() ) {
        std::cout << "made a noise\n";
        int i = std::rand();
        std::cout << i << std::endl;
        if (i % 2 == 0) {
            std::cout << _target << " has been robotomizedn\n";
        } else {
            std::cout << _target << " robotomy failed\n";
        }
    } else {
        throw GradeTooLowException();
    }
}