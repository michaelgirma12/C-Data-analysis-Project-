#include "..//Header Files//coefficientOfDetermination.h"
#include <cmath>
#include <iostream>
#include <numeric>
using namespace std;


coefficientOfDetermination::coefficientOfDetermination(){
}

coefficientOfDetermination::coefficientOfDetermination(const coefficientOfDetermination & orig){
}

void coefficientOfDetermination::codCalc (vector<double> &X, vector<double> &Y, vector<double> &y_fit, double &b1) {  
  Y_average = accumulate(Y.begin(), Y.end(), 0.0)/Y.size();
  X_average = accumulate(X.begin(), X.end(), 0.0)/X.size();

  for (int i=0; i< Y.size(); i++) {
    sse += pow(Y[i] - y_fit[i], 2);
    y_sst += pow(Y[i] - Y_average, 2);
    x_sst += pow(X[i] - X_average, 2);
    ssr += pow(y_fit[i] - Y_average, 2);
  }

 cod = ssr/y_sst;

 mse = sse/(Y.size()-2);
 see = sqrt(mse);
 sdb = see/sqrt(x_sst);
 t = b1/sdb;

 coefficientOfDetermination_Output();

 return;
}

void coefficientOfDetermination:: coefficientOfDetermination_Output(){
 cout << endl;
 cout << "_ _ _ Coefficient of Determination Output _ _ _" << endl;
 cout << "Coefficient of determination = " << cod << endl;
 cout << "Correlation Coefficient = " << sqrt(cod) << endl;
 cout << "Average = " << Y_average << endl;
 cout << "Total sum of squares = " << y_sst << endl;
 cout << "Sum of squares due to Erro = " << sse << endl;
 cout << "Sum of squares due to Regression = " << ssr << endl; 
 cout << endl;
 cout << "_ _ _ Testing for Significance _ _ _" << endl;
 cout << " Mean Square Error = " << mse << endl;
 cout << " Standard Error of the Estimate = " << see << endl;
 cout << " Estimate Standard Deviation of b1 = " << sdb << endl;
 cout << " Test statistic = " << t << endl;

}

coefficientOfDetermination:: ~coefficientOfDetermination(){
  
}



