#pragma once
#include "Graph.h"
#include "Simple_window.h"

class Scale {
	int cbase;
	int vbase;
	double scale;
public:
	Scale(int b, int vb,double s):cbase{b},vbase{vb},scale{s}{}
	int operator()(int v)const { return cbase + (v - vbase)*scale; }
};

void graph();