#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>

class Form
{
    private:
        const std::string   _name;
        bool                _signed;
        const int           _gradeToSign;
        const int           _gradeToExecute;

    public:
        Form();
        Form(const Form &other);
        Form & operator=(const Form & other);
        ~Form();
        Form(const std::string &name, int gradeToSign, int gradeToExecute);

        std::string getName() const;
        bool        isSigned() const;
        int         getGradeToSign() const;
        int         getGradeToExecute() const;
};

#endif