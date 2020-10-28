#include "temp.h"
istream& operator>>(istream& is, Temps&t) {
	is >> t.max >> t.min;
	return is;
}

Vector<Temps> les_temp_fra_fil(string filnavn) {
	ifstream fil{ filnavn };
	string line;
	Temps tem;
	vector<Temps> temperaturer;
	while (getline(fil, line)) {
		stringstream s{ line };
		s >> tem.max>>tem.min;
		temperaturer.push_back(tem);

	}
	return temperaturer;
}