/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yadereve <yadereve@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 12:15:22 by yadereve          #+#    #+#             */
/*   Updated: 2025/01/13 09:50:22 by yadereve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"

int main()
{
	try
	{
		Bureaucrat bob("Bob", 50);
		ShrubberyCreationForm shrubbery("Garden");
		RobotomyRequestForm robotmy("Target");
		PresidentialPardonForm pardon("Alice");

		bob.signForm(shrubbery);
		bob.executeForm(shrubbery);

		bob.signForm(shrubbery);
		bob.executeForm(shrubbery);

		Bureaucrat president("President", 1);
		president.signForm(pardon);
		president.executeForm(pardon);
	}
	catch (std::exception& ex)
	{
		std::cout << "Exeption " << ex.what() << std::endl;
	}


	return 0;
}
