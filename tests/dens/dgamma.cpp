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

// g++-mp-7 -O2 -Wall -std=c++11 -fconstexpr-depth=2000 -I./../../include -I/opt/local/include dgamma.cpp -o dgamma.test -framework Accelerate
// g++-mp-7 -O3 -Wall -std=c++11 -DSTATSLIB_GO_CONST -I./../../include -I/opt/local/include dgamma.cpp -o dgamma.test -framework Accelerate

#include <cmath>
#include <iomanip>
#include "stats.hpp"

int main()
{
    double err_tol = 1E-06;
    int round_digits_1 = 3;
    int round_digits_2 = 5;

    double shape_par = 2.0;
    double scale_par = 3.0;

    // x = 1
    double x_1 = 1;
    double val_1 = 0.07961459;
    double dens_1 = stats::dgamma(x_1,shape_par,scale_par,false);

    bool success_1 = (std::abs(dens_1 - val_1) < err_tol);
    std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(round_digits_1-1) << "dgamma(" << x_1 << "): ";
    std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(round_digits_2) << dens_1 << ". Success = " << success_1 << std::endl;

    // x = 2, return log
    double x_2 = 2;
    double val_2 = -2.170744;
    double dens_2 = stats::dgamma(x_2,shape_par,scale_par,true);

    bool success_2 = (std::abs(dens_2 - val_2) < err_tol);
    std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(round_digits_1-1) << "dgamma(" << x_2 << ",log=true): ";
    std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(round_digits_2) << dens_2 << ". Success = " << success_2 << std::endl;

    if (success_1 && success_2) {
        printf("\ndgamma: all tests passed.\n");
    }

    //
    // coverage tests

    stats::dgamma(x_1);
    stats::dgamma(x_1,true);
    stats::dgamma(x_1,shape_par,scale_par);

    arma::mat x_mat(2,1);
    x_mat(0,0) = 1;
    x_mat(1,0) = 2;

    stats::dgamma(x_mat);
    stats::dgamma(x_mat,true);
    stats::dgamma(x_mat,shape_par,scale_par);
    stats::dgamma(x_mat,shape_par,scale_par,true);

    return 0;
}
