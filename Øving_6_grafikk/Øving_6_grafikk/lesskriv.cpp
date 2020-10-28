#include "lesskriv.h"
void lesinn_ord(string filnavn) {
	string input = " ";
	ofstream fil{ filnavn };
	if (!fil)error("Kan ikke åpne filen", filnavn);
	while (input != "quit") {
		cout << "Skriv inn et ord: ";
			cin >> input;
			if (input == "quit") {
				break;
			}
			else {
				fil << input + '\n';
			}
	}
}

void linje_nummer(string filnavn) {
	ifstream fil{ filnavn };
	int linje_nummer{ 0 };
	ofstream fil_num{ "linje_"+filnavn };
	string linje;
	while (getline(fil,linje)) {
		fil_num << linje_nummer <<' '<< linje<<'\n';
		++linje_nummer;
}

}


void antall_bokstaver_i_fil(string filnavn) {
	map<char, int>antall_bok{
		{'a',0},
	{'b',0},
	{'c',0},
	{'d',0},
	{'e',0},
	{'f',0},
	{'g',0},
	{'h',0},
	{'i',0},
	{'j',0},
	{'k',0},
	{'l',0},
	{'m',0},
	{'n',0},
	{'o',0},
	{'p',0},
	{'q',0},
	{'r',0},
	{'s',0},
	{'t',0},
	{'u',0},
	{'v',0},
	{'w',0},
	{'x',0},
	{'y',0},
	{'z',0}
	};
	ifstream fil{ filnavn };
	char c;
	while (fil >> c) {
		try {
			towlower(c);
			++antall_bok.at(c);
		}
		catch (exception) {
			
		}
	}
	for (int i = 97; i < 123; ++i) {
		char c = static_cast<char>(i);
		cout << c <<": "<< antall_bok.at(c) << '\n';
	}
}

