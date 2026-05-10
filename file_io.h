#pragma once

#include <string>
#include <vector>
//using namespace std;




/**
  This function opens the ASCII-file named @p file_name and rewrites its with the
  double data from the C++ vector @p v.
  If there are problems in opening/generating file  @p file_name
  then the code stops with an appropriate message.
  @param[in]    file_name   name of the ASCII-file
  @param[in]    v           C++ vector with double values
*/

void write_vector_to_file(const std::string& file_name, const std::vector<double>& v);
