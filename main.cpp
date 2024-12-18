
/**
 * Capstone Project: COVID-19 Data Analysis
 * 
 * Description:
 * This program analyzes a dataset (e.g., COVID-19 deaths) using statistical methods such as
 * linear regression (Least Squares Fitting), correlation coefficient, and coefficient of determination.
 * The results are visualized using custom plotting libraries.
 * 
 * Dependencies:
 * - LSF.h: Implements Least Squares Fitting calculations.
 * - correlationCoefficient.h: Calculates the correlation coefficient.
 * - coefficientOfDetermination.h: Computes the coefficient of determination.
 * - readCSV.h/writeCSV.h: Handles CSV input/output operations.
 * - pbPlots.h/plotResults.h: Visualizes the analysis results.
 * 
 * Author: [Your Name]
 * Date: [Project Date]
 */

#include <iostream>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include "Header Files//LSF.h"
#include "Header Files//correlationCoefficient.h"
#include "Header Files//coefficientOfDetermination.h"
#include "Header Files//plotResults.h"
#include "Header Files//pbPlots.h"
#include "Header Files//supportLib.h"
#include "Header Files//readCSV.h"
#include "Header Files//writeCSV.h"

using namespace std;

/**
 * Main Function
 * - Reads data from a CSV file.
 * - Performs statistical analysis (LSF, correlation coefficient, R-squared).
 * - Outputs results and generates plots.
 */
int main(int argc, char** argv) {
    // Incorporation of data files
    vector<double> X; // Independent variable (e.g., time or deaths)
    vector<double> Y; // Dependent variable

    cout << "Main: memory address of X = " << &X << endl;
    cout << "Main: memory address of Y = " << &Y << endl;

    // Directory and filename for input CSV
    string myDirectory{"Data Files//"};
    string myFilename{"example.csv"};
    
    // Read data from CSV
    readCSV myData;
    vector<pair<string, vector<double>>> result = myData.read_csv((myDirectory + myFilename).c_str());

    X = result.at(0).second; // First column data
    Y = result.at(1).second; // Second column data

    // Perform Least Squares Fitting (LSF) to calculate regression line
    LSF myLSF;
    myLSF.calculateLSF(X, Y); // Calculates slope and intercept
    cout << "LSF Results: Slope = " << myLSF.getSlope() 
         << ", Intercept = " << myLSF.getIntercept() << endl;

    // Compute Correlation Coefficient
    double correlation = calculateCorrelationCoefficient(X, Y);
    cout << "Correlation Coefficient = " << correlation << endl;

    // Compute Coefficient of Determination (R^2)
    double r_squared = calculateR2(X, Y, myLSF.getSlope(), myLSF.getIntercept());
    cout << "Coefficient of Determination (R^2) = " << r_squared << endl;

    // Plot results
    plotResults plot;
    plot.generatePlot(X, Y, myLSF); // Generate and save a plot

    cout << "Program completed successfully." << endl;
    return 0;
}
