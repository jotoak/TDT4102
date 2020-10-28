#include "meetingWindow.h"

MeetingWindow::MeetingWindow(Point xy, int w, int h,const string& name) :
	Window{ w, h, name },
	inputName(Point{ fieldPad, pad }, fieldW, fieldH, "Name"),
	inputEmail(Point{ fieldPad, 2 * pad + fieldH }, fieldW, fieldH, "Email"),
	quiteBtn(Point{x_max()-pad,pad},buttonW,buttonH,"Quit",cb_quite),
	addButton(Point{x_max() - pad, 2*pad}, buttonW, buttonH, "Add", cb_add){	
	attach(inputName);
	attach(inputEmail);
	attach(addButton);
	attach(quiteBtn);
}

void MeetingWindow::cb_quite(Address, Address pw) {
	reference_to<MeetingWindow>(pw).hide();
}



void MeetingWindow::cb_add(Address, Address pw) {
	reference_to<MeetingWindow>(pw).addPerson();
}

void MeetingWindow::addPerson() {
	string name = inputName.get_string();
	string email = inputEmail.get_string();
	if (name == "" or email == "") {
		cout << "Invalid input\n";
	}
	else {
		people.push_back(new Person{ name,email });
	}
}
