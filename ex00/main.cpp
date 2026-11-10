/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zajaddou <zajaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 18:37:26 by zajaddou          #+#    #+#             */
/*   Updated: 2026/11/10 18:58:26 by zajaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    std::cout << "========== 0 ==========" << std::endl;

    {
        Bureaucrat a("Main", 100);
        std::cout << a << std::endl;
    }

    std::cout << "========== 1 ==========" << std::endl;

    try {
        Bureaucrat a("-", 0);
    }
    catch (std::exception &e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

    std::cout << "========== 2 ==========" << std::endl;

    try {
        Bureaucrat a("-", 151);
    }
    catch (std::exception &e) {
        std::cout << "Error: " << e.what() << std::endl;
    }


    std::cout << "========== 3 ==========" << std::endl;

    try {
        Bureaucrat a("B", 1);
        a.incrementGrade();
    }
    catch (std::exception &e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

    std::cout << "========== 4 ==========" << std::endl;

    try {
        Bureaucrat a("B", 150);
        a.decrementGrade();
    }
    catch (std::exception &e) {
        std::cout << "Error: " << e.what() << std::endl;
    }
    
    return 0;
}