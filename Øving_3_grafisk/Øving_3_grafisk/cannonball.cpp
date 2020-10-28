#include "cannonball.h"
#include "std_lib_facilities.h"


double acclY() {
	return -9.81;
}

double velY(double initVelocityY, double time) {
	return initVelocityY + acclY()*time;
}

double posX(double initPosition, double initVelocity, double time) {
	return initPosition + initVelocity * time;
}

double posY(double initPosition, double initVelocity, double time) {
	return initPosition + initVelocity * time + (acclY()*time*time) / 2;
}

void printTime(double time) {
	int timer = time / 3600;
	time = time - (time * 3600);
	int minutter = time / 60;
	time = time - (minutter * 60);
	int sekunder = time;
	cout << timer << " timer " << minutter << " minutter " << sekunder << " sekunder ";
}

double flightTime(double fartY) {
	return (-2 * fartY) / acclY();
}

void getUserInput(double& theta, double& absVelocity) {
	cout << "Skriv inn en vinkel: \n";
	cin >> theta;
	cout << "Skriv inn en hastighet: \n";
	cin >> absVelocity;
}

double degToRad(double deg) {
	return (2 * 2.14*deg) / 360;
}

double getVelocityX(double theta, double absVelocity) {
	return absVelocity * cos(theta);
}

double getVelocityY(double theta, double absVelocity) {
	return absVelocity * sin(theta);
}

void getVelocityVector(double theta, double absVelocity, double& velocityX, double& velocityY) {
	velocityX = getVelocityX(theta, absVelocity);
	velocityY = getVelocityY(theta, absVelocity);
}

double getDistanceTraveled(double velocityX, double velocityY) {
	return posX(0, velocityX, flightTime(velocityY));
}

double targetPractice(double distanceToTarget, double velocityX, double velocityY) {
	return distanceToTarget - getDistanceTraveled(velocityX, velocityY);
}

