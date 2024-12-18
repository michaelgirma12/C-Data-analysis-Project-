#include "..//Header Files//readCSV.h"
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <utility>
#include <stdexcept>
#include <sstream>
#include <iomanip>

using namespace std;


readCSV::readCSV() { 

}

void readCSV::displayCSV() {
  cout << endl;

  for(int i = 0; i < result.size(); ++i) {
    cout << result.at(i).first << " " ;
  }
  cout << endl;

  for (int row = 0; row < result.at(0).second.size(); ++row) {
    for (int col = 0; col < result.size(); ++col) {
      cout << result.at(col).second.at(row) << setprecision(5) << " ";
    }
    cout<< endl;
  }
  return;
}
 vector<pair<string, vector<double>>> readCSV::read_csv(string filename) {
   
   ifstream myFile(filename);

  if(!myFile.is_open()) throw runtime_error("Could not open file.");

  
  if(myFile.good()){

    getline(myFile, line);
    stringstream ss(line);
    while (getline(ss, colname, ',')) {
      result.push_back({colname, vector<double>{}});
    }
  }

  while(getline(myFile, line)) {
    stringstream ss(line);
    int colIdx = 0;

    while (ss >> val) {

      result.at(colIdx).second.push_back(val);

      if(ss.peek() == ',') ss.ignore();
      colIdx++;
    }
  }
  myFile.close();
  return result;

};
readCSV::readCSV(const readCSV& orig) {
}

readCSV::~readCSV(){
}
