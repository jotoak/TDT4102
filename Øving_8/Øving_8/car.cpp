#include "car.h"

Car::Car(int ledigeSeter):freeSeats{ledigeSeter}{}

bool Car::hasFreeSeats()const {
	if (freeSeats > 0) {
		return true;
	}
	else {
		return false;
	}
}

void Car::reserveFreeSeat() {
	--freeSeats;
}