#include "playMastermind.h"
#include "Graph.h"
#include "utilities.h"
#include  "masterVisual.h"
#include "Simple_window.h"
int checkCharactersAndPosition(string tekst1, string tekst2) {
	int antall = 0;
	for (int i = 0; i < tekst1.size(); ++i) {
		if (tekst1[i] == tekst2[i]) {
			++antall;
		}
	}
	return antall;
}

int checkCharacters(string tekst1, string tekst2) {
	int riktige = 0;
	for (int i = 0; i < tekst1.size(); ++i){
		for (int k = 0; k < tekst2.size(); ++k) {
			if (tekst1[i] == tekst2[k]) {
				++riktige;
				break;
			}
		}
	}
	return riktige;
}

void playMastermind() {
	MastermindWindow mwin{ Point{900, 20}, 400, 600, "Mastermind" };
	constexpr int size = 4;
	constexpr int letters = 6;
	string code{};
	string guess{};
	code = randomizeString(size, 'A', 'A' + (letters - 1));
	int riktige = 0;
	int plass = 0;
	int forsok = 10;
	while (size >= riktige and forsok!=0 and plass!=size) {
		cout << code;
		cout << "Gjett " << size << " bokstaver mellom a og F\n";
		guess = readInputToString(size, 'A', 'A' + (letters - 1));
		addGuess(mwin, guess, size, code[0], 10 - forsok);
		addFeedback(mwin, plass, guess[0], size, 10 - forsok);
		mwin.wait_for_button();
		riktige = checkCharacters(code, guess);
		plass = checkCharactersAndPosition(code, guess);
		cout << "Antall riktige bokstaver: " << riktige << " og antall bokstaver på riktig plass: " << plass << '\n';
		--forsok;
	}
	if (riktige == size and size==plass) {
		cout << "Du vant.\n";
	}
	else {
		cout << "Du tapte.\n";
	}
}