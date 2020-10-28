#include "std_lib_facilities.h"
#include "tests.h"
#include "utilities.h"
#include "playMastermind.h"
#include "graph.h"
//v0=5
//increment =2
//iterations=10
//result=25

int main(){
	srand(static_cast<unsigned int> (time(nullptr)));
	int choice = -1;
	while (choice != 0) {
		cout << "\nVelg funksjon:\n0) Avslutt\n1)Test call by Value\n2)Test call by reference\n3)Test vector sorting\n4)Test streng.\n5)Spill Mastermind\nAngi valg (0-5): ";
		cin >> choice;
		switch (choice)
		{
		case 0:
			break;

		case 1:
			testCallByValue();
			break;
		case 2:
			testCallbyReference();
			break;
		case 3:
			testVectorSorting();
			break;
		case 4:
			testString();
			break;
		case 5:
			playMastermind();
			break;
		case 6:
			graph();
			break;
		default:
			cout << "Ugyldig valg\n";
			break;
		}
	}

	return 0;
}