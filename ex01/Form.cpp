
#include "Form.hpp"


bool Form::isSigned() const
{
    return (_signed);
}

int Form::getGradeToSign() const
{
    return (_gradeToSign);
}

int Form::getGradeToExecute() const
{
    return (_gradeToExecute);
}

std::string Form::getName() const
{
    return (this->_name);
}

Form::Form() : _name("Default"), _signed(false), _gradeToSign(150), _gradeToExecute(150)
{
    std::cout << "Default, Created !" << std::endl;
}

Form::Form(const Form &other) :  _name(other._name), _signed(other._signed), _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute)
{
    std::cout << other._name << ", Copy !" << std::endl;
}

Form::~Form()
{
    std::cout << _name << ", Deleted !" << std::endl;
}

Form &Form::operator=(const Form &other)
{
    if (this != &other)
    {
        this->_signed = other._signed;
        std::cout << this->_name << ", Assignment !" << std::endl;
    }
    return (*this);
}

Form::Form(const std::string &name, int gradeToSign, int gradeToExecute) : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
    
}