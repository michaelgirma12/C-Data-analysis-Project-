#ifndef CORRELATIONCOEFFICIENT_H
#define CORRELATIONCOEFFICIENT_H
#include <vector>

using namespace std;

class correlationCoefficient {
  public:
    double corr;

    correlationCoefficient();
    virtual ~correlationCoefficient();

    void ccCalc(vector<double> X, vector<double> Y);
  private:
    double sum_X = 0;
    double sum_Y = 0;
    double sum_XY = 0;
    double squareSum_X = 0;
    double squareSum_Y = 0;

    void ccOutput();

};

#endif 
