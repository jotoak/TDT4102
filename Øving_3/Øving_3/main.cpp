#include "std_lib_facilities.h"
#include "cannonball.h"
#include "utilities.h"
int main(){
	srand(static_cast<unsigned int> (time(nullptr)));
	cout << velY(25, 5)<<'\n';
	cout << posX(0, 50, 5)<<'\n';
	cout << posY(0, 25, 5) << '\n';
	// Your code here
	cout << randomWithLimits(100, 150);
	playTargetPractice();
	return 0;
}