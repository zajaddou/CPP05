
#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>

class Bureaucrat {
    private:
        const std::string _name;
        int _grade;
    public:
        std::string getName() const;
        int         getGrade() const;
        Bureaucrat();
        Bureaucrat(const std::string & name, int grade);
        Bureaucrat(const Bureaucrat &other);
        Bureaucrat &operator=(const Bureaucrat &other);
        ~Bureaucrat();

        class GradeTooHighException : public std::exception
        {
            public:
                const char *what() const throw();
        };

        class GradeTooLowException : public std::exception
        {
            public:
                const char *what() const throw();
        };
};

#endif