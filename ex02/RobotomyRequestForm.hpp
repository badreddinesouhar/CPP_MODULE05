/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 14:27:46 by bsouhar           #+#    #+#             */
/*   Updated: 2023/12/04 17:22:20 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm {
    private:
        const std::string _target;
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string target);
        ~RobotomyRequestForm();
        void execute(Bureaucrat const & executor);
};

#endif