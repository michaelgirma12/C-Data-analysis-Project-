#include "../Header Files//correlationCoefficient.h"
#include <cmath> 
#include <iostream> 

using namespace std;

correlationCoefficient::correlationCoefficient(){ 
}

void correlationCoefficient::ccCalc(vector<double> X , vector<double> Y){
  for (int i=0; i < X.size();i++){
   sum_X = sum_X + X[i];
   sum_Y = sum_Y + Y[i];  
   sum_XY =  sum_XY + X[i] * Y[i]; 

   squareSum_X = squareSum_X + X[i] * X[i];
   squareSum_Y = squareSum_Y + Y[i] * Y[i];
}

//formula for correlation coefficient 
corr = (double) (X.size() * sum_XY - sum_X * sum_Y)
  / sqrt((X.size() * squareSum_X - sum_X * sum_X) * (X.size() * squareSum_Y - sum_Y * sum_Y));

  correlationCoefficient::ccOutput();

return;
}


void  correlationCoefficient::ccOutput(){
 cout << "Correlation Coefficient = " << corr <<  endl;  
}



correlationCoefficient::~correlationCoefficient(){


}