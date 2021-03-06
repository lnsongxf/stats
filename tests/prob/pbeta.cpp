/*################################################################################
  ##
  ##   Copyright (C) 2011-2017 Keith O'Hara
  ##
  ##   This file is part of the StatsLib C++ library.
  ##
  ##   StatsLib is free software: you can redistribute it and/or modify
  ##   it under the terms of the GNU General Public License as published by
  ##   the Free Software Foundation, either version 2 of the License, or
  ##   (at your option) any later version.
  ##
  ##   StatsLib is distributed in the hope that it will be useful,
  ##   but WITHOUT ANY WARRANTY; without even the implied warranty of
  ##   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  ##   GNU General Public License for more details.
  ##
  ################################################################################*/

// g++-mp-7 -O3 -Wall -std=c++11 -I./../../include -I/opt/local/include pbeta.cpp -o pbeta.test -framework Accelerate

#include <math.h>
#include <iomanip>
#include "armadillo"
#include "stats.hpp"

int main()
{
    double err_tol = 1E-05;
    int round_digits_1 = 2;
    int round_digits_2 = 5;

    double alpha_par = 3;
    double beta_par = 2;

    // x = +0.01
    double x_1 = 0.01;
    double val_1 = 3.97e-06;
    double prob_1 = stats::pbeta(x_1,alpha_par,beta_par);

    bool success_1 = (std::abs(prob_1 - val_1) < err_tol);
    std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(round_digits_1) << "pbeta(" << x_1 << "): ";
    std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(round_digits_2) << prob_1 << ". Success = " << success_1 << std::endl;

    // x = +0.05
    double x_2 = 0.05;
    double val_2 = 0.00048125;
    double prob_2 = stats::pbeta(x_2,alpha_par,beta_par);

    bool success_2 = (std::abs(prob_2 - val_2) < err_tol);
    std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(round_digits_1) << "pbeta(" << x_2 << "): ";
    std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(round_digits_2) << prob_2 << ". Success = " << success_2 << std::endl;

    // x = +0.15
    double x_3 = 0.15;
    double val_3 = 0.01198125;
    double prob_3 = stats::pbeta(x_3,alpha_par,beta_par);

    bool success_3 = (std::abs(prob_3 - val_3) < err_tol);
    std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(round_digits_1) << "pbeta(" << x_3 << "): ";
    std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(round_digits_2) << prob_3 << ". Success = " << success_3 << std::endl;

    // x = +0.35
    double x_4 = 0.35;
    double val_4 = 0.1264812;
    double prob_4 = stats::pbeta(x_4,alpha_par,beta_par);

    bool success_4 = (std::abs(prob_4 - val_4) < err_tol);
    std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(round_digits_1) << "pbeta(" << x_4 << "): ";
    std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(round_digits_2) << prob_4 << ". Success = " << success_4 << std::endl;

    // x = +0.50
    double x_5 = 0.50;
    double val_5 = 0.3125;
    double prob_5 = stats::pbeta(x_5,alpha_par,beta_par);

    bool success_5 = (std::abs(prob_5 - val_5) < err_tol);
    std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(round_digits_1) << "pbeta(" << x_5 << "): ";
    std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(round_digits_2) << prob_5 << ". Success = " << success_5 << std::endl;

    // x = +0.65
    double x_6 = 0.65;
    double val_6 = 0.56298125;
    double prob_6 = stats::pbeta(x_6,alpha_par,beta_par);

    bool success_6 = (std::abs(prob_6 - val_6) < err_tol);
    std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(round_digits_1) << "pbeta(" << x_6 << "): ";
    std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(round_digits_2) << prob_6 << ". Success = " << success_6 << std::endl;

    // x = +0.85
    double x_7 = 0.85;
    double val_7 = 0.8904812;
    double prob_7 = stats::pbeta(x_7,alpha_par,beta_par);

    bool success_7 = (std::abs(prob_7 - val_7) < err_tol);
    std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(round_digits_1) << "pbeta(" << x_7 << "): ";
    std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(round_digits_2) << prob_7 << ". Success = " << success_7 << std::endl;

    // x = +0.95
    double x_8 = 0.95;
    double val_8 = 0.9859813;
    double prob_8 = stats::pbeta(x_8,alpha_par,beta_par);

    bool success_8 = (std::abs(prob_8 - val_8) < err_tol);
    std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(round_digits_1) << "pbeta(" << x_8 << "): ";
    std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(round_digits_2) << prob_8 << ". Success = " << success_8 << std::endl;

    // x = +0.99
    double x_9 = 0.99;
    double val_9 = 0.999408;
    double prob_9 = stats::pbeta(x_9,alpha_par,beta_par);

    bool success_9 = (std::abs(prob_9 - val_9) < err_tol);
    std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(round_digits_1) << "pbeta(" << x_9 << "): ";
    std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(round_digits_2) << prob_9 << ". Success = " << success_9 << std::endl;

    if (success_1 && success_2 && success_3 && success_4 && success_5 && success_6 && success_7 && success_8 && success_9) {
        printf("\npbeta: all tests passed.\n");
    }

    //
    // coverage tests

    stats::pbeta(x_1);
    stats::pbeta(x_1,true);
    stats::pbeta(x_1,alpha_par,beta_par);

    arma::mat x_mat(2,1);
    x_mat(0,0) = 0.4;
    x_mat(1,0) = 0.5;

    stats::pbeta(x_mat);
    stats::pbeta(x_mat,true);
    stats::pbeta(x_mat,alpha_par,beta_par);
    stats::pbeta(x_mat,alpha_par,beta_par,true);

    return 0;
}
