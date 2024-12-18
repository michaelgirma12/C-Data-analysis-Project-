#ifndef WRITECSV_H
#define WRITECSV_H

#include <vector>
#include <string>

class writeCSV {
  public: 

  writeCSV();

  writeCSV(std::string filename, std::vector<std::pair<std::string, std::vector<double>>> dataset);

  writeCSV(const writeCSV& orig);
  virtual ~writeCSV();
};

#endif