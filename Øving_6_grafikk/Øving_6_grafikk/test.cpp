#include "Graph.h"
#include "Simple_window.h"
#include "temp.h"

constexpr int windowHeight = 600;
constexpr int windowWidth = 1000;

constexpr int chartHeight = 0.8*windowHeight;
constexpr int chartWidth = 0.8*windowWidth;

constexpr int charthOffsetX = 0.1*windowHeight;
constexpr int charthOffsetY = 0.1*windowWidth;

constexpr int baselineY = charthOffsetY + chartHeight/2;

constexpr int baselineX = charthOffsetX;
void graphTest() {
	Vector<Temps> temperaturer = les_temp_fra_fil("temp.txt");
	using namespace Graph_lib;

	Simple_window win{ {100,100},windowWidth,windowHeight,"Daglig maks-og minimumstemperaturer fra 3. ferbruar 2018 til og med 3. februar 2019." };

	Axis x{ Axis::Orientation::x,{baselineX,baselineY},chartWidth,12,"Feb            Mar           Apr           May           Jun             Jul           Aug            Sep           Oct             Nov             Dec           Jan"};
	x.label.move(-200,0);
	x.set_color(Color::black);
	win.attach(x);

	Axis y{ Axis::Orientation::y,{baselineX,charthOffsetY + chartHeight},chartHeight,5,"degrees[C]" };
	//y.label.move(0, 10);
	Text en{ Point{charthOffsetX-20,10+(chartHeight / 5) * 2},"20" };
	en.set_color(Color::black);
	win.attach(en);
	Text en1{ Point{charthOffsetX - 20,10+(chartHeight / 5)*3},"10" };
	en1.set_color(Color::black);
	win.attach(en1);
	Text en2{ Point{charthOffsetX - 25,10+(chartHeight / 5) * 4},"-10" };
	en2.set_color(Color::black);
	win.attach(en2);
	Text en3{ Point{charthOffsetX - 25,10+(chartHeight / 5) * 5},"-20" };
	en3.set_color(Color::black);
	win.attach(en3);
	y.set_color(Color::black);
	win.attach(y);

	Text MAX{ Point{charthOffsetX - 40,360},"min" };
	MAX.set_color(Color::red);
	win.attach(MAX);
	Text MIN{ Point{charthOffsetX - 40,380},"min" };
	MIN.set_color(Color::blue);
	win.attach(MIN);

	double horizontalPointSpacing = chartWidth / static_cast<double>(temperaturer.size());
	Open_polyline max;
	Open_polyline min;
	unsigned int i{ 0 };
	for (auto t : temperaturer) {
		int y = baselineY - (t.max / 50)*chartHeight;
		int x = baselineX + horizontalPointSpacing * i;
		int z= baselineY - (t.min / 50)*chartHeight;
		max.add({ x,y });
		min.add({ x,z });

		++i;
	}

	max.set_color(Color::red);
	min.set_color(Color::blue);
	win.attach(max);
	win.attach(min);

	win.wait_for_button();
}