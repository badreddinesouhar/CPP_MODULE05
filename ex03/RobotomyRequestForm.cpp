/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 14:27:49 by bsouhar           #+#    #+#             */
/*   Updated: 2023/12/30 04:14:30 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm() : AForm("",72, 45) {
    
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy): AForm("RobotMyRequest", 72, 45), _target(copy._target) {
    std::cout << "copy constractor has been called" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& robotomyrequestform) {
    (void)robotomyrequestform;
    return *this;
}

// void RobotomyRequestForm::executed(Bureaucrat const & executor) const {
//     (void)executor;
//     std::cout << "made a noise\n";
//     int i = std::rand();
//     std::cout << i << std::endl;
//     if (i % 2 == 0) {
//         std::cout << _target << " has been robotomizedn\n";
// =======
// void RobotomyRequestForm::execute(Bureaucrat const & executor) {
//     if ((executor.getGrade() < this->getGradeEx()) && !this->getIndex() ) {
//         std::cout << "made a noise\n";
//         int i = rand();
//         std::cout << i << std::endl;
//         if (i % 2 == 0) {
//             std::cout << _target << " has been robotomizedn\n";
//         } else {
//             std::cout << _target << " robotomy failed\n";
//         }
// >>>>>>> cd72d7b0ad2f95bc0248f9ec0ceb6651de6521f9
//     } else {
//         std::cout << _target << " robotomy failed\n";
//     }
// }

void RobotomyRequestForm::executed(Bureaucrat const & executor) const {
    if ((executor.getGrade() < this->getGradeEx()) && !this->getIndex() ) {
        std::cout << "made a noise\n";
        int i = rand();
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