#include "rootfinding.h"
#include <cmath>
#include <vector>

double Bisect3(const std::function<double(double)>& func,
              const double a,
               const double b,
               const  double eps) // This function is going to find one root, return it as result,  for when we are sure that f(a) f(b) < =  0. Becuse this is the case we are sure at least  one root between a and b exists. Whit this fuction we find that root.
{
    
    double result;
    if ( func(a) < eps  ) // Maybe f(a) = 0
    {
        result = a;
    }
    else if ( func(b) < eps  )// Maybe f(b) =0
    {
        result = b;
    }
    double c = (a + b) / 2; // If both f(a) and f(b) are nonzero, it looks at the avrage of them, say c.
    double fc = func(c);
    if (std::abs(fc) < eps || std::abs(b - a) < eps) // At first if  f(c) is almost
        // zero or the interval [a, b] is such klein, we accept c as the root.
    {
        result = c;
    }
    else if (func(a) * fc <= 0)  // Now apply the above method to eitehr [a, c] or [b, c]. It depnonds which one satisfies condition of the function.
    {
        result = Bisect3(func, a, c, eps); // Here we continue till applying our function as long as one of last cases happens
    }
    else
    {
        result = Bisect3(func, c, b, eps);
    }

    return result;
}

std::vector<double> findRoots(const std::function<double(double)>& f,
                              double a,
                              double b,
                              int intervals) // Here we define a fucntion that tries to find maximum " n = interval" roots between a and b. The roots are given us in a vector.
{
    std::vector<double> roots;
    double step = (b - a) / intervals;

    for (int i = 0; i < intervals; i++)
    {
        double x1 = a + i * step;
        double x2 = x1 + step;

        if (f(x1) * f(x2) <= 0) // So after breaking our [a, b] to n times, we apply our function in the above for each interval.
        {
            double root = Bisect3(f, x1, x2, 1e-6);
            roots.push_back(root); // This is how we save the roots in a vector, called root. 
        }
    }

    return roots;
}




