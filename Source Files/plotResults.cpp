#include <cstdlib>
#include <iostream>
#include <vector>
#include <cmath>
#include<iomanip>
#include "..//Header Files//pbPlots.h"
#include "..//Header Files//supportLib.h" 
#include "..//Header Files//plotResults.h"  


using namespace std;

plotResults::plotResults() {
}

void plotResults::plot(vector<double> &x, vector<double> &y, vector<double> &y_fit) {
  RGBABitmapImageReference *imageReference = CreateRGBABitmapImageReference();
	
	ScatterPlotSeries *series = GetDefaultScatterPlotSeriesSettings();
	series->xs = &x;
	series->ys = &y;
	series->linearInterpolation = false;
	series->pointType = toVector(L"dots");
	series->color = CreateRGBColor(1, 0, 0);

	ScatterPlotSeries *series2 = GetDefaultScatterPlotSeriesSettings();
	series2->xs = &x;
	series2->ys = &y_fit;
	series2->linearInterpolation = true;
	series2->lineType = toVector(L"solid");
	series2->lineThickness = 2;
	series2->color = CreateRGBColor(0, 0, 1);

	ScatterPlotSettings *settings = GetDefaultScatterPlotSettings();
	settings->width = 600;
	settings->height = 400;
	settings->autoBoundaries = true;
	settings->autoPadding = true;
	settings->title = toVector(L"");
	settings->xLabel = toVector(L"");
	settings->yLabel = toVector(L"");
	settings->scatterPlotSeries->push_back(series);
	settings->scatterPlotSeries->push_back(series2);

	DrawScatterPlotFromSettings(imageReference, settings);

	vector<double> *pngdata = ConvertToPNG(imageReference->image);
	
  WriteToFile(pngdata, "output files//example3.png");
	DeleteImage(imageReference->image);

    return;
}

plotResults::plotResults(const plotResults& orig) {
}

plotResults::~plotResults() {
}