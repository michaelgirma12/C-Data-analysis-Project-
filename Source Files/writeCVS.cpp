//output of the data printed 
#include "..//Header Files//writeCSV.h"
#include <string>
#include <fstream>
#include <vector>

using namespace std; 

writeCSV::writeCSV() {
}

writeCSV::writeCSV(string filename, vector<pair<string,vector<double>>> dataset) {

  ofstream myFile(filename);

  for (int j = 0; j < dataset.size(); ++j) {
    myFile << dataset.at(j).first;
    if(j != dataset.size() - 1) myFile << ","; 
  }
  myFile << "\n";

  for(int i = 0; i < dataset.at(0).second.size(); ++i){
    for (int j =0; j < dataset.size(); ++j) {
      myFile << dataset.at(j).second.at(i);
      if(j != dataset.size() - 1) myFile << ",";
    }
    myFile << "\n";
  }
  myFile.close();
}
writeCSV::writeCSV(const writeCSV& orig) {

}
writeCSV::~writeCSV() {

}