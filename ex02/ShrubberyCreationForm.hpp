/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 14:27:55 by bsouhar           #+#    #+#             */
/*   Updated: 2023/12/04 15:52:23 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm {
    public:
        const std::string _target;
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string target);
        ~ShrubberyCreationForm();
        void execute(Bureaucrat const & executor);
};

#endif