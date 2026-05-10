#include <vector>
#include <string>
#include <fstream>
#include "functions.h"
#include <cmath>




double eval(const std::vector<double>& coeffs, double x) { // Here is a  definition of our polynimal when it takes coefficients as a vector and by chaning the degree is equal to the size of the vector.
    double sum = 0;
    for (size_t k = 0; k < coeffs.size(); ++k)
        sum += coeffs[k] * std::pow(x, k);
    return sum;
}

// Here is also a function that is going to write the roots that it founds at the end in a txt file
void write_vector_to_file(const std::string& filename, const std::vector<double>& vec) {
    std::ofstream outfile(filename);
    for (double value : vec) {
        outfile << value << "\n";
    }
    outfile.close();
}
