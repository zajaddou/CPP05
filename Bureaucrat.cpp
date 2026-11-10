
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("defult"), _grade(150)
{
    std::cout << "defult constractor" << std::endl;
};

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name), _grade(grade)
{
    std::cout << "custom constractor" << std::endl;
};

Bureaucrat::~Bureaucrat()
{
    std::cout << "destractor" << std::endl;
};

Bureaucrat::Bureaucrat(const Bureaucrat &other) : _name(other._name) , _grade(other._grade)
{
    std::cout << "copy constractor" << std::endl;
};

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
    if (this != &other)
    {
        std::cout << "copy operator" << std::endl;
        this->_grade = other._grade;
    }
    return (*this);
};

std::string Bureaucrat::getName() const
{
    return (this->_name);
};

int         Bureaucrat::getGrade() const
{
    return (this->_grade);
};


const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade is too high!";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade is too low!";
}