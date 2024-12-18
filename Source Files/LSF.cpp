#include <iostream>
#include <vector>
#include<cmath>
#include <cstdlib>
#include "..//Header Files//LSF.h" 

using namespace std;

// constructor 
LSF::LSF(){
}

LSF::~LSF(){
}
void LSF::LSFCalc (vector<double> x, vector<double> y){
  //LSF 
  for (int i=0; i < x.size();i++){
   xsum = xsum + x[i];
   ysum = ysum + y[i];
   x2sum = x2sum + pow(x[i], 2);
   xysum =  xysum + x[i] * y[i]; 
 }
// finding slope 
 m = (x.size() * xysum - xsum * ysum) / (x.size() * x2sum - xsum * xsum);
 // finding intercept 
 b = (x2sum * ysum - xsum * xysum) / (x2sum * x.size() - xsum * xsum);
 cout << "y = " << m << "x + " << b << endl;
 //final values 
 for (int i=0; i< x.size(); i++){
 y_fit.push_back(m * x[i] + b);
}
//output 
cout << "x" << "   " << "y" << "   " << "y_fit" << endl;
for (int i=0; i < x.size(); i++){
  cout << x[i] << "   " << y[i] << "   " << y_fit[i] << endl;
} 
}