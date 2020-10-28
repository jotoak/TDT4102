#pragma once
#include "Graph.h"
#include "car.h"
class Person {
private:
	string name;
	string email;
	Car* carpeker;
public:
	Person(string name, string email, Car* car=nullptr);
	const string getName() const;
	string getEmail()const;
	void setEmail(string mail);
	bool hasAVailableSeats()const;
	friend ostream& operator <<(ostream& out, Person& p);
};