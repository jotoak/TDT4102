#pragma once
#include <string>
#include <list>
using namespace std;
class Person {
private:
	string fornavn;
	string etternavn;
public:
	Person(string fornavn, string etternavn) :fornavn{ fornavn }, etternavn{ etternavn }{}

	
};
void insertOrdered(std::list<Person> &l, const Person& p);
