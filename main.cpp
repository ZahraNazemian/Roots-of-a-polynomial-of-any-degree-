#include <iostream>
#include <cassert>
#include <vector>
#include <cmath>
#include "functions.h"
#include "rootfinding.h"
#include "file_io.h"
#include <fstream>
#include <string>
#include <unistd.h>
// This  is a function that is going to read a txt file and save the data in a double vector.
void read_vector_from_file(const std::string& filename,  std::vector<double>& vec) {
    std::ifstream infile(filename);
    assert (infile.is_open()); // File gefunden:
    
    double value;
    vec.clear(); // It makes sure the vector value hat keine entries
    while (infile >> value) {
        vec.push_back(value);
    }
}

int main()
{

    // Now we want to define s and its roots it takes coeficiants from the txt file
    std::vector<double> koeff;
    read_vector_from_file("input_1.txt", koeff);

    auto s = [&koeff](double x) {
        return eval(koeff, x);
    };
    // I ask it to give me roots between - 16 and 25. Once can choose any interval
    std::vector<double> roots_s = findRoots(s, -16, 25, 1500);

    std::cout  << "Here are"  << roots_s.size() << "\nRoots of s(x):\n";
    for (double r : roots_s)
        std::cout << r << "\n";
    
    write_vector_to_file("roots_s.txt", roots_s);
    return 0;
}





