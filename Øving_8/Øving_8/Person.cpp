#include "person.h"

Person::Person(string name, string email, Car* car) :name{name},email{email},carpeker{car}{}

const string Person::getName()const {
	return name;
}

string Person::getEmail() const {
	return email;
}

void Person::setEmail(string mail) {
	email = mail;
}

bool Person::hasAVailableSeats()const {
	return carpeker->hasFreeSeats();
}

ostream& operator <<(ostream& out, Person&p) {
	string bil;
	if (p.hasAVailableSeats() == 1) {
		bil = "Ledig sete";
	}
	else {
		bil = "Ikke ledig sete";
	}
	out << "Navn: " << p.getName() << "\n" << "Email: " << p.getEmail() << '\n' << "Bil: " <<  bil;
	return out;
}
