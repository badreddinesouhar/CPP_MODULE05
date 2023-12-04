/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 14:27:49 by bsouhar           #+#    #+#             */
/*   Updated: 2023/12/04 15:34:27 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("",72, 45) {
    
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("",72, 45) , _target(target) {
    
}

RobotomyRequestForm::~RobotomyRequestForm() {
    
}