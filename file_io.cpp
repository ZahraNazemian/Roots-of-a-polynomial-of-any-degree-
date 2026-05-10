#include "file_io.h"
#include <cassert>
#include <fstream>
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>
using namespace std;


void write_vector_to_file(const string& file_name, const vector<double>& v)
{
    ofstream fout(file_name);          // Oeffne das File im ASCII-Modus
    if( fout.is_open() )
    {
       for (unsigned int k=0; k<v.size(); ++k)
       {
          fout << v.at(k) << endl;
       }
    }
    else
    {
        cout << "\nFile " << file_name << " has not been opened.\n\n" ;
        assert( fout.is_open() && "File not opened."  );         // exeption handling for the poor programmer
    }
}

