#pragma once
#include "Graph.h"
class CourseCatalog {
public:
	friend ostream& operator<<(ostream&, const CourseCatalog&);
	void addCourse(string emnekode,string emnenavn);
	void removeCourse(string emnekode);
	string getCourse(string emnekode);
	void save_data(string filnavn);
	void load_data(string filnavn);
private:
	map<string, string> courses{};
};
