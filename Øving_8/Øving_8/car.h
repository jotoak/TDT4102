#pragma once
#include "Graph.h"

class Car {
private:
	int freeSeats;
public:
	Car(int ledigeSeter);
	bool hasFreeSeats()const;
	void reserveFreeSeat();

};