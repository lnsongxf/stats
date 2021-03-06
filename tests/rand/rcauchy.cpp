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

// g++-mp-7 -O3 -Wall -std=c++11 -I./../../include -I/opt/local/include rcauchy.cpp -o rcauchy.test -framework Accelerate

#include "stats.hpp"

int main()
{
    double mu = 2.5;
    double sigma = 1.5;
    
    double cauchy_rand = stats::rcauchy(mu,sigma);

    std::cout << "cauchy rv: " << cauchy_rand << std::endl;

    int n = 100;
    arma::vec cauchy_vec = stats::rcauchy(n,mu,sigma);

    std::cout << "cauchy rv mean: " << arma::mean(cauchy_vec) << std::endl; // not defined
    std::cout << "cauchy rv variance: " << arma::var(cauchy_vec) << std::endl; // not defined

    //
    // coverage tests
    
    stats::rcauchy(100,100,mu,sigma);

    return 0;
}
