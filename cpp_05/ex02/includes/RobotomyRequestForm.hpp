#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Bureaucrat.hpp"

class RobotomyRequestForm : public AForm
{
public:
	RobotomyRequestForm(const std::string& target);
	~RobotomyRequestForm();

	void execute(const Bureaucrat& executor) const;

private:
	const std::string _target;
};

#endif
