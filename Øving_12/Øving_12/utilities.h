#pragma once
#include <FL/Fl.h>
struct PhysicsState {
	double x, y, angle, vel, grip = 1;

	void draw();
};