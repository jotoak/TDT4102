// Example program in TDT4102_Graphics template, from PPP page 415
#include "Graph.h"
#include "Simple_window.h"
#include "meeting.h"
#include "car.h"
#include "person.h"
#include "meetingWindow.h"
int main() {

	/*Person per{ "Per","per@gmail.com" };
	cout << per;
	Campus tro = Campus::Trondheim;
	cout << tro;*/
	MeetingWindow win{ Point{200,300},400,300,"win"};
	return gui_main();
	keep_window_open();
	return 0;
}

