#ifndef COEFFICIENTOFDETERMINATION_H
#define COEFFICIENTOFDETERMINATION_H
#include <vector> 

using namespace std;

class coefficientOfDetermination {
  public: // accsess outside of the class 
    double cod{0};

    coefficientOfDetermination();

    coefficientOfDetermination(const coefficientOfDetermination & orig);
    virtual ~coefficientOfDetermination();

    void codCalc(vector<double> &X, vector<double> &Y, vector<double> &y_fit, double &b1);

  private: // restricted to the class 
   double X_average{0};
   double Y_average{0};
   double sse{0};
   double y_sst{0};
   double x_sst{0};
   double ssr{0};
   double mse{0};
   double see{0};
   double sdb{0};
   double t{0};

   void coefficientOfDetermination_Output();
};
#endif 