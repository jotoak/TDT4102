#include "vis.h"
#include "temp.h"
constexpr int xmax = 600;
constexpr int ymax = 400;

constexpr int xoffset = 100;
constexpr int yoffset = 60;

constexpr int xspace = 40;
constexpr int yspace = 40;

constexpr int xlenght = xmax - xoffset - xspace;
constexpr int ylenght = ymax - yoffset - yspace;

constexpr int base_month = 2;
constexpr int end_month = 14;

constexpr double xscale = double(xlenght) / (end_month - base_month);
constexpr double yscale = double(ylenght) / 100;
void garph() {
	Vector<Temps> temperaturer = les_temp_fra_fil("temp.txt");
	using namespace Graph_lib;

	Scale xs{ xoffset,base_month,xscale };
	Scale ys{ ymax - yoffset,0,-yscale };

	Simple_window win{ Point{100,100},xmax,ymax,"Daglig maks-og minimumstemperaturer fra 3. ferbruar 2018 til og med 3. februar 2019." };

	Axis x{ Axis::Orientation::x,Point{xoffset,ymax - yoffset},xlenght,(end_month - base_month) / 10,"Feb Mar Apr May Jun Jul Aug Sep Oct Nov Dec Jan" };
	x.label.move(-100, 0);

	Axis y{ Axis::Orientation::y,Point{xoffset,ymax - yoffset},ylenght,10,"degrees[C]" };

	Open_polyline max;
	Open_polyline min;
//
//	int i = 0;
//	for (auto t : temperaturer) {
//		max.add(Point{ i,ys(t.max) });
//		min.add(Point{ i,ys(t.min) });
//		++i;
//	}
//	win.attach(max);
//	win.attach(min);
//	win.wait_for_button();
}
