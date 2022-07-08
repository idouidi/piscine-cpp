#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string& target)
:Form(target, 25, 5)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& p)
:Form(p)
{
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& p)
{
	if (this != &p)
	{
		setName(p.getName());
		setSigned(p.getSigned());
		setGradeRequiredToSign(p.getGradeRequiredToSign());
		setGradeRequiredToExec(p.getGradeRequiredToExec());
	}
	return (*this);	
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardon Form was destroyed" << std::endl;
}

void PresidentialPardonForm::execute(const Bureaucrat& b)const
{
	if (b.getGrade() > getGradeRequiredToExec())
		throw GradeTooLowExecption();
	if (!getSigned())
		throw IsntSignedExecption();
	std::cout << getName() << " has been pardoned by Zafod Beeblebrox" << std::endl;
	std::cout << std::endl;
}