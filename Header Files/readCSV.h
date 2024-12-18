#ifndef READCSV_H
#define READCSV_H

#include <string>
#include <vector>

using namespace std;

class readCSV {
  public:
  vector<pair<string, vector<double>>> result;

  readCSV();
  readCSV(const readCSV& orig);
  virtual~ readCSV();

  void displayCSV();
  vector<pair<string, vector<double>>> read_csv(string filename);
  
  private:
  string line, colname;
  double val;
};

#endif