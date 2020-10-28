#include "catalog.h"

void CourseCatalog::addCourse(string emnekode,string emnenavn ) {
	//courses.insert(std::pair<string,string>(emnekode, emnenavn));
	courses[emnekode] = emnenavn;
}
// Ser ingen forskjell på de to ulike operatorene. 

void CourseCatalog::removeCourse(string emnekode) {
	courses.erase(emnekode);
}
string CourseCatalog::getCourse(string emnekode) {
	return courses.at(emnekode);
}

ostream& operator<<(ostream& out, const CourseCatalog& kat) {
	for (auto t: kat.courses) {
		out << t.first << ": " << t.second<<'\n';
	}
	return out;
}


void CourseCatalog::save_data(string filnavn) {
	ofstream fil{ filnavn };
	for (auto t : courses) {
		fil << t.first << ':' << t.second << '\n';
	}
}

void CourseCatalog::load_data(string filnavn) {
	ifstream fil{ filnavn };
	string emnenavn;
	string emnekode;
	string line;
	/*if (!fil) {
		error("Kan ikke åpne fil");
	}*/

	while (getline(fil, emnekode,':') and getline(fil,emnenavn,'\n')) {
		addCourse(emnekode, emnenavn);
	}
}