#include "utilities.h"

int incrementByValueNumTimes(int startValue, int increment, int numTimes) {
	for (int i = 0; i < numTimes; i++) {
		startValue += increment;
	}
	return startValue;
}
void incrementByValueNumTimesRef(int &startValue, int &increment, int &numTimes) {
	for (int i = 0; i < numTimes; i++) {
		startValue += increment;
	}
}
void swapNumbers(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}
void randomizeVector(vector<int> &vec, int n) {
	for (int i = 0; i < n; ++i) {
		int til = rand() % 100;
		vec.push_back(til);
	}
}
void printVector(vector<int> vec) {
	cout << "[";
	for (int i = 0; i < vec.size(); ++i) {
		cout << vec[i] << ',';
	}
	cout << "]\n";
}

void sortVector(vector<int> &vec) {
	int i = 1;
	while (i < vec.size()) {
		int j = i;
		++i;
		while (j > 0 and vec[j - 1] > vec[j]) {
			swapNumbers(vec[j], vec[j - 1]);
			--j;
		}
	}

}

double medianOfVector(vector<int> vec) {
	sortVector(vec);
	if (vec.size() % 2 == 0) {
		return (vec[int(vec.size() / 2.0 - 0.5)] + vec[int(vec.size() / 2.0 + 0.5)]) / 2.0;
	}
	else {
		return vec[vec.size() / 2 + 1];
	}
}

string randomizeString(int lengde, char nedre, char overe) {
	int nedre_grense = static_cast<int> (nedre);
	int overe_grense = static_cast<int>(overe);
	string mystr{};
	for (int i = 0; i < lengde; ++i) {
		char bok = static_cast<char>(nedre_grense + rand() % ((overe_grense + 1) - nedre_grense));
		mystr += bok;
	}
	return mystr;
}

string readInputToString(int lengde, char nedre, char overe) {
	string tekst{};
	cout << "Skriv inn en streng med bokstaver: \n";
	cin >> tekst;
	string ret{};
	for (int i = 0; i < lengde; ++i) {
		if (isalnum(tekst[i])) {
			ret += toupper(tekst[i]);
		}
	}
	return ret;
}

int countChar(string tekst, char c) {
	int antall = 0;
	for (int i = 0; i < tekst.size(); ++i) {
		if (tekst[i] == c) {
			++antall;
		}
	}
	return antall;
}
void gradecount(vector<int>&vec, string grades) {
	string tekst = "ABCDEF";
	for (int i = 0; i < 6; ++i) {
		vec.push_back(countChar(grades, tekst[i]));
	}
}