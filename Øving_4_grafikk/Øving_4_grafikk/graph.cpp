#include "Graph.h"
#include "Simple_window.h"

constexpr int windowHeight = 600;
constexpr int windowWidth = 600;

constexpr int chartHeight = 0.8*windowHeight;
constexpr int chartWidth = 0.8*windowWidth;

constexpr int charthOffsetX = 0.1*windowHeight;
constexpr int charthOffsetY = 0.1*windowWidth;

constexpr int baselineY = charthOffsetY + chartHeight;

constexpr int baselineX = charthOffsetX;
void graph() {
	using namespace Graph_lib;

	Simple_window win{ {100,100},windowWidth,windowHeight,"Unemployment graph" };

	Axis x{ Axis::Orientation::x,{baselineX,baselineY},chartWidth,30,"Year" };
	x.set_color(Color::black);
	win.attach(x);

	vector<double> percentSeekingWork = { 1.7,1.5,1.5,2.3,1.8,1.5,1.8,2.0,1.7,2.0,2.6,3.4,3.2,2.6,2.0,2.1,3.2,4.9,5.2,5.5,5.9,6.0,5.4,4.9,4.8,4.0,3.2,3.2,3.4,3.5 };
	double horizontalPointSpacing = chartWidth / static_cast<double>(percentSeekingWork.size());
	Open_polyline graph;

	unsigned int i{ 0 };
	for (double value : percentSeekingWork) {
		int y = baselineY - (value / 10)*chartHeight;
		int x = baselineX + horizontalPointSpacing*i;
		graph.add({ x,y });
		++i;
	}

	graph.set_color(Color::blue);

	win.attach(graph);

	win.wait_for_button();
}