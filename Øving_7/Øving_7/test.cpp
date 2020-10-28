#include "test.h"
void test_empthyface(Graph_lib::Window&win) {
	EmpthyFace f{ Point{100,100},50};
		f.attach_to(win);
}
void test_smilingface(Graph_lib::Window&win) {
	SmilingFace s{ Point{100,100},50};
	s.attach_to(win);
}
void test_sadface(Graph_lib::Window&win) {
	SadFace sad{ Point{100,100},50};
	sad.attach_to(win);
}
void test_angryface(Graph_lib::Window&win) {
	AngryFace a{ Point{100,100},50};
	a.attach_to(win);
}
void test_winkingface(Graph_lib::Window&win) {
	WinkingFace w{ Point{100,100},50 };
	w.attach_to(win);
}
void test_suprisedface(Graph_lib::Window&win) {
	SurprisedFace sup{ Point{100,100},50 };
	sup.attach_to(win);
}