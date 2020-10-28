#pragma once
#include "person.h"

enum class Campus {
	Trondheim,
	Ålesund,
	Gjøvik
};

const map<Campus, string> campusToString{
	{Campus::Trondheim,"Trondheim"},
	{Campus::Ålesund,"Ålesund"},
	{Campus::Gjøvik,"Gjøvik"}
};

ostream& operator<<(ostream& out, Campus campus);
class Meeting {
private:
	int day;
	int startTime;
	int endTime;
	Campus location;
	string subject;
	Person* leader; //skal være const her, men får feilmelding da
	set<const Person*> participants;
	static set<const Meeting*> meetings;
public:
	int getDay()const;
	int getStartTime()const;
	int getEndTime()const;
	Campus getLocation()const;
	string getSubject()const;
	const string getLeader()const;
	void addParticipants(Person* deltaker);
	Meeting(int day, int startTime, int endTime, Campus location, string subject, Person* leader);
	~Meeting();
	vector<string> getParticipantList();
	vector<const Person*>findPotentialCoDriving();
};