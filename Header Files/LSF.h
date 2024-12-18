#ifndef LSF_H
#define LSF_H 

#include <vector> 


class LSF { 
 private:
 

 double xsum{0};
 double x2sum{0};
 double ysum{0};
 double xysum{0};

 public:
 std::vector<double> y_fit;
 LSF();
 ~LSF();
 void LSFCalc (std::vector<double> x,std:: vector<double> y); 
 double m{0}; 
 double b{0};
};

#endif 