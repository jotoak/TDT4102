#pragma once
#include "Graph.h"

struct Temps {
	double max;
	double min;
};

istream& operator>>(istream& is, Temps&t);

Vector<Temps> les_temp_fra_fil(string filnavn);