#pragma once
double acclY();
double velY(double initVelocityY, double time);
double posX(double initPosition, double initVelocity, double time);
double posY(double initPosition, double initVelocity, double time);
void printTime(double time);
double flightTime(double fartY);
void getUserInput(double& theta, double& absVelocity);
double degToRad(double deg);
double getVelocityX(double theta, double absVelocity);
double getVelocityY(double theta, double absVelocity);void getVelocityVector(double theta, double absVelocity, double& velocityX, double& velocityY);
double getDistanceTraveled(double velocityX, double velocityY);
double targetPractice(double distanceToTarget, double velocityX, double velocityY);