#ifndef PLOTRESULTS_H
#define PLOTRESULTS_H

#include <vector>
using namespace std;

class plotResults {
  public:

    plotResults();
    plotResults(const plotResults& orig);
    virtual ~plotResults();

  void plot(vector<double> &X, vector<double> &Y, vector<double> &y_fit);






  private:

};
#endif