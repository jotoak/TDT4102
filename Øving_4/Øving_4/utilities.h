#pragma once
#include "std_lib_facilities.h"

int incrementByValueNumTimes(int startValue, int increment, int numTimes);
void incrementByValueNumTimesRef(int &startValue, int &increment, int &numTimes);
void swapNumbers(int &a, int &b);
void randomizeVector(vector<int> &vec, int n);
void printVector(vector<int> vec);
void sortVector(vector<int> &vec);
double medianOfVector(vector<int> vec);
string randomizeString(int lengde, char nedre, char overe);
string readInputToString(int lengde, char nedre, char overe);
int countChar(string tekst, char c);
void gradecount(vector<int>&vec, string grades);
