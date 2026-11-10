
#include "Bureaucrat.hpp"

int main()
{
    try {
        throw Bureaucrat::GradeTooLowException();
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}