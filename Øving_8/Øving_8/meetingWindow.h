#pragma once
//#include "meeting.h"
#include "Graph.h"
#include "Simple_window.h"
#include "Window.h"
#include "meeting.h"

using namespace Graph_lib;

class MeetingWindow : Graph_lib::Window {
public:
	MeetingWindow(Point xy, int w, int h,const string& name);

private:
	static constexpr int fieldH = 30;
	static constexpr int fieldW = 100;
	static constexpr int fieldPad = 100;
	static constexpr int buttonW = 40;
	static constexpr int buttonH = 30;
	static constexpr int buttonPad = 50;
	static constexpr int pad = 50;
	
	In_box inputName;
	In_box inputEmail;
	Button addButton;
	Button quiteBtn;
	static void cb_quite(Address, Address pw);
	static void cb_add(Address, Address pw);
	Vector_ref<Person>people;
	void addPerson();
};