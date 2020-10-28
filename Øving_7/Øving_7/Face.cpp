#include "Face.h"
EmpthyFace::EmpthyFace(Point center, int radius)
	:Face{ center,radius }, eye1{ Point{80,90},5}, eye2{Point{120,90},5 }
{eye1.set_fill_color(Color::black);
eye1.set_color(Color::black);
eye2.set_fill_color(Color::black);
eye2.set_color(Color::black);
eye2.set_fill_color(Color::black);
}

void EmpthyFace::attach_to(Graph_lib::Window& win) {
	Face::attach_to(win);
	win.attach(eye1);
	win.attach(eye2);
}

SmilingFace::SmilingFace(Point center, int radius)
	:EmpthyFace{ center,radius}, munn{ Point{100,80},100,100,240,300 }{munn.set_color(Color::black); munn.set_fill_color(Color::black); }

void SmilingFace::attach_to(Graph_lib::Window&win) {
	EmpthyFace::attach_to(win);
	win.attach(munn);

}

SadFace::SadFace(Point center, int radius)
	:EmpthyFace{ center,radius}, munn{ Point{100,160},100,100,60,120 }{munn.set_color(Color::black); munn.set_fill_color(Color::black); }

void SadFace::attach_to(Graph_lib::Window&win) {
	EmpthyFace::attach_to(win);
	win.attach(munn);

}

AngryFace::AngryFace(Point center, int radius) 
	:SadFace{ center,radius},
	o1{ Point{80,90},30,30,10,80 }, o2{ Point{120,90},30,30,100,180 }{o1.set_color(Color::black); o1.set_fill_color(Color::black); o2.set_fill_color(Color::black); o2.set_color(Color::black); }

void AngryFace::attach_to(Graph_lib::Window&win) {
	SadFace::attach_to(win);
	win.attach(o1);
	win.attach(o2);

}

WinkingFace::WinkingFace(Point center, int radius)
	:Face{ center,radius }, munn{ Point{100,80},100,100,240,300 }, eye1{ Point{80,90},5 }, o1{ Point{125,95},40,20,90,160 }, o2{ Point{120,100},40,20,80,130 }{
	munn.set_color(Color::black);
	munn.set_fill_color(Color::black);
	eye1.set_color(Color::black);
	eye1.set_fill_color(Color::black);
	o1.set_color(Color::black);
	o1.set_fill_color(Color::black);
	o2.set_color(Color::black);
	o2.set_fill_color(Color::black);
}
void WinkingFace::attach_to(Graph_lib::Window&win) {
	Face::attach_to(win);
	win.attach(munn);
	win.attach(eye1);
	win.attach(o1);
	win.attach(o2);
}

SurprisedFace::SurprisedFace(Point center, int radius)
	:EmpthyFace{ center,radius }, munn{ Point{100,120},40,40,0,360 }{munn.set_color(Color::black); munn.set_fill_color(Color::black); }

void SurprisedFace::attach_to(Graph_lib::Window&win) {
	EmpthyFace::attach_to(win);
	win.attach(munn);

}