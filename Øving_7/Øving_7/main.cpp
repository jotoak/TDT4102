// Example program in TDT4102_Graphics template, from PPP page 415
#include "Graph.h"
#include "Simple_window.h" 
#include "Face.h"
#include "test.h"
int main() {
	using namespace Graph_lib;
	/*cout << "The New \"Hello, Graphical World!\" message\n";*/
	Point tl{ 100, 100 };
	Simple_window win{ tl, 600, 400, "Emoji" }; 
	//Face k{ {200,200},100 };
	/*EmpthyFace f{ Point{100,100},50};
	f.attach_to(win);*/
	//k.attach_to(win);
	/*SmilingFace s{ Point{100,100},50};
	s.attach_to(win);*/
	/*SadFace sad{ Point{100,100},50};
	sad.attach_to(win);
*/
	/*AngryFace a{ Point{100,100},50};
	a.attach_to(win);*/
	/*SurprisedFace sup{ Point{100,100},50 };
	sup.attach_to(win);
*/
			EmpthyFace f{ Point{100,100},50};
			SmilingFace s{ Point{100,100},50};
			SadFace sad{ Point{100,100},50};
			AngryFace a{ Point{100,100},50};
			WinkingFace w{ Point{100,100},50 };
			SurprisedFace sup{ Point{100,100},50 };

	int choice = -1;
	while (choice != 0) {
		//win.wait_for_button();
		cout << "\nVelg funksjon:\n0) Avslutt\n1)Empthy face\n2)Smiling face\n3)Sad face.\n4)Angry face\n5)Winking face\n6)Suprisedface\nAngi valg (0-6): ";
		cin >> choice;
		switch (choice)
		{
		case 0:
			break;

		case 1:
			f.attach_to(win);
			win.wait_for_button();
			break;
		case 2:
			s.attach_to(win);
			win.wait_for_button();
			break;
		case 3:
			sad.attach_to(win);
			win.wait_for_button();
			break;
		case 4:
			a.attach_to(win);
			win.wait_for_button();
			break;
		case 5:
			w.attach_to(win);
			win.wait_for_button();
			break;
		case 6:
			sup.attach_to(win);
			win.wait_for_button();
		default:
			cout << "Ugyldig valg\n";
			break;
		}
	}
	/*test_smilingface(win);
	win.wait_for_button();*/
	keep_window_open();
	return 0;	
}

