/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 13:16:24 by bsouhar           #+#    #+#             */
/*   Updated: 2023/11/30 13:16:25 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name(""), gradeIn(0) , gradeEx(0){
    this->index = false;
    std::cout << "Form default constracror"  << std::endl;
}

Form::~Form() {
    std::cout << "destractor is called" << std::endl;
}

Form::Form(const Form& copy) : _name(copy.getName()) , gradeIn(copy.getGradeIn()), gradeEx(copy.getGradeIn()) {
    // this->

}

Form& Form::operator=(const Form& form) {
    this->index = form.index;
    return *this;
}

 int Form::getGradeEx() const {
    return gradeEx;
}

 int Form::getGradeIn() const {
    return gradeIn;
}

const std::string Form::getName() const {
    return _name;
}