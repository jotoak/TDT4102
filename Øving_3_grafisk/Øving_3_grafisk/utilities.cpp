#include "utilities.h"
#include "std_lib_facilities.h"
#include "cannonball.h"
#include "viz.h"
int randomWithLimits(int min, int max) {
	return min + rand() % max;
}

void playTargetPractice() {
	int forsok = 10;
	int avstand = randomWithLimits(100, 1000);
	while (forsok != 0) {
		double theta = 0;
		double absVelocity = 0;
		cout << "Avstanden til blinken er " << avstand << " meter.\n";
		getUserInput(theta, absVelocity);
		cannonBallViz(avstand, 1000, getVelocityX(theta, absVelocity), getVelocityY(theta, absVelocity),5);
		double differanse = targetPractice(avstand, getVelocityX(theta, absVelocity), getVelocityY(theta, absVelocity));
		if (differanse <= 5) {
			cout << "Gratulere, du traff blinken.\n";
			break;
		}
		else {
			cout << "Du var " << differanse << "meter unna blinken.\n";
			--forsok;
		}
	}
	if (forsok == 0) {
		cout << "Du tapte...";
	}
}