#include "meeting.h"

ostream& operator<<(ostream& out, Campus campus) {
	out << campusToString.at(campus);
	return out;
}

int Meeting::getDay()const {
	return day;
}

int Meeting::getStartTime()const {
	return startTime;
}

int Meeting::getEndTime()const {
	return endTime;
}

Campus Meeting::getLocation()const {
	return location;
}

string Meeting::getSubject()const {
	return subject;
}

const string Meeting::getLeader()const {
	return leader->getName();
}

void Meeting::addParticipants(Person* deltaker) {
	participants.insert(deltaker);
}

set<const Meeting*>Meeting::meetings;

Meeting::Meeting(int day, int startTime, int endTime, Campus location, string subject, Person* leader)
	:day{ day }, startTime{ startTime }, endTime{ endTime }, location{ location }, subject{ subject }, leader{ leader }{participants.insert(leader);
meetings.insert(this); }

Meeting::~Meeting() {
	meetings.erase(this);
}

vector<string> Meeting::getParticipantList() {
	vector<string> deltakere;
	for (const auto p : participants) {
		deltakere.push_back(p->getName());
	}
	return deltakere;
}

ostream& operator<<(ostream& out, Meeting meeting) {
	out << "Subject: " << meeting.getSubject() << '\n'
		<< "Location: " << meeting.getLocation() << '\n'
		<< "Start time: " << meeting.getStartTime() << '\n'
		<< "End time: " << meeting.getEndTime() << '\n'
		<< "Leader: " << meeting.getLeader()<<'\n';
	return out;
}

vector<const Person*> Meeting::findPotentialCoDriving(){
	vector<const Person*> kjoring;
	for (const auto t : meetings) {
		if (t->getLocation() == this->getLocation()) {
			if (t->getDay() == this->getDay()) {
				if (t->getStartTime() - 1 <= this->getStartTime() & t->getEndTime() - 1 <= this->getEndTime()) {
					for (const auto p : participants) {
						if (p->hasAVailableSeats()) {
							kjoring.push_back(p);
						}
					}
				}
			}
		}
	}
	return kjoring;
}