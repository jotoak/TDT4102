#include <Fl/Fl_Double_Window.H>
#include <FL/Fl.H>
#include "Vehicle.h"
using namespace std;

int main() {
	Fl_Double_Window win{ 600,600,"Spill" };
	 Vehicle* vin  =new  Vehicle();
	win.end();
	win.show();
	int FPS = 60;
	auto next = chrono::system_clock::now();
	while (win.shown()) {
		next += chrono::microseconds(1000000 / FPS);

		Fl::check();
		win.redraw();

		// [begrense FPS]
		this_thread::sleep_until(next);
	}



	return 0;
}