#include "Vehicle.h"
#include <iostream>

Vehicle::Vehicle() :Fl_Widget{ 100,100,200,200 } {}
void Vehicle::draw() {

	movment();
	fl_color(FL_GREEN);
	fl_circle(ps.x, ps.y, vehRad);
}

void Vehicle::movment(){
	double velAcc = 0;
	double angAcc = 0;
	if (Fl::get_key(FL_Down)) velAcc = -1;
	else if (Fl::get_key(FL_Up)) velAcc = 1;
	if (Fl::get_key(FL_Left)) angAcc = -1;
	else if (Fl::get_key(FL_Right)) angAcc = 1;

	ps.grip += 0.01*(1 - ps.grip);
	ps.vel += 0.006 * ps.grip * velAcc * (6 - abs(ps.vel) + 5 * ((ps.vel > 0) != (velAcc > 0)));
	ps.angle += 0.03 * ps.grip * angAcc;
	ps.x += ps.vel * cos(ps.angle); 
	ps.y += ps.vel * sin(ps.angle);

	if (ps.x > width - vehRad) ps.x = width - vehRad;
	else if (ps.x < vehRad) ps.x = vehRad;
	if (ps.y > height - vehRad) ps.y = height - vehRad;
	else if (ps.y < vehRad) ps.y = vehRad;
	// width og height er const for bredden og høyden til hele vinduet
}	
