#pragma once
#include "Emoji.h"
using namespace Graph_lib;
class Face : public Emoji {
private:
	Circle fjes;
public:
	Face(Point center, int radius):fjes { center, radius }{fjes.set_fill_color(Color::yellow); };

 virtual void attach_to(Graph_lib::Window& win) override{ win.attach(fjes);}
};

class EmpthyFace :public Face {
private:
	Circle eye1;
	Circle eye2;
public:
	EmpthyFace(Point center, int radius);
	virtual void attach_to(Graph_lib::Window& win) override;

};

class SmilingFace :public EmpthyFace {
private:
	Arc munn;
public:
	SmilingFace(Point center, int radius);
	virtual void attach_to(Graph_lib::Window& win) override;
};

class SadFace :public EmpthyFace {
private:
	Arc munn;
public:
	SadFace(Point center, int radius);
	virtual void attach_to(Graph_lib::Window& win) override;
};

class AngryFace :public SadFace {
private:
	Arc o1;
	Arc o2;
public:
	AngryFace(Point center, int radius);
	virtual void attach_to(Graph_lib::Window& win) override;
};

class WinkingFace : public Face {
private:
	Arc munn;
	Circle eye1;
	Arc o1;
	Arc o2;
public:

	WinkingFace(Point center,int radius);
	void attach_to(Graph_lib::Window&win);
};

class SurprisedFace :public EmpthyFace {
private:
	Arc munn;
public:
	SurprisedFace(Point center, int radius);
	virtual void attach_to(Graph_lib::Window& win) override;
};