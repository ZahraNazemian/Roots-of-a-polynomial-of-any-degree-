#pragma once
#include <functional>
#include <vector> // We are going  to define two functions.

//  This one is going to give us maximum one root in [a, b]:

double Bisect3(const std::function<double(double)>& func,
               double a,
               double b,
               double eps = 1e-6);
//  This one is going to give us maximum  "intervals" roots in [a, b]:

std::vector<double> findRoots(const std::function<double(double)>& f,
                              double a,
                              double b,
                              int intervals);
