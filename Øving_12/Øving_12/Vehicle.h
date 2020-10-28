#pragma once
#include <FL/Fl.H>
#include <FL/fl_draw.H>
#include <FL/Fl_Window.H>
#include <chrono>
#include <thread>
#include "utilities.h"
constexpr int width = 600;
constexpr int height = 600;
constexpr int vehRad = 15;
class Vehicle : public Fl_Widget {
private:
	PhysicsState ps;
public:
	Vehicle();
	void draw() override;
	void movment();
};
