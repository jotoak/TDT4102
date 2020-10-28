#pragma once
#include <FL/Fl.H>
#include <FL/fl_draw.H>
#include <FL/Fl_Window.H>
#include <chrono>
#include <thread>
#include "utilities.h"
#include "Vehicle.h"
#include <vector>

class Track : public Fl_Widget {
private:
	std::vector < std::pair<double, double>> goals;

public:
	Track();

};