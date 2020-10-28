#include "std_lib_facilities.h"

void inputAndPrintInteger() {
	int tall=-1;
	cout << "Skriv inn et tall: ";
	cin >> tall;
	cout << "Du skrev: " << tall;


}

int inputInteger() {
	int tall = -1;
	cout << "Skriv inn et tall: ";
	cin >> tall;
	return tall;
}

void inputIntegersAndPrintSum() {
	int sum = 0;
	for (int i = 0; i < 2; ++i) {
		sum += inputInteger();
	}
	cout << "Summen av tallene: " << sum;
}
// Bruker inputInteger fordi den retunerer tallet som brukeren skrev inn, er da enkelt og summere opp summen. 

bool isOdd(int a) {
	if (a % 2 != 0) {
		return true;
	}
	else {
		return false;
	}
}

void printHumanReadebleTime(int sek) {
	int timer = sek / 3600;
	sek = sek- (timer * 3600);
	int minutter = sek / 60;
	sek = sek-( minutter * 60);
	int sekunder = sek;
	cout << timer << " timer " << minutter << " minutter " << sekunder << " sekunder ";

}

 void inputIntegersUsingLoopAndPrintSum(){
	 cout << "\nSkriv 0 for å avslutte";
	 int sum = 0;
	 int input = -1;
	 while (input != 0) {
		 cout << "\nSkriv inn et tall: ";
		 cin >> input;
		 sum+=input;
	 }
	 cout << "\nSummen av tallene ble " << sum;

 }
 // for løkke er best hvis man spør brukeren om antall tall han vil skrive inn på forhånd. 
 // En while løkke fungerer best hvis man ønsker at programmet skal avslutte når brukeren taster 0.

 double inputDouble() {
	 double tall = 0.55;
	 cout << "\nSkriv inn et flyttall: ";
	 cin >> tall;
	 return tall;
 }

 void NokToEuro() {
	 double be = inputDouble();
	 double valuta = be / 9.75;
	 cout << "Du får " << valuta << " euro.\n";
 }

 // Det at vi bruker inputDoble gir brukeren muligheten til å skrive inn et flyttal. Det er naturlig at returen blir et desimaltall.

 void gange_tabell() {
	 int x = 0;
	 int y = 0;
	 cout << "Bredde og lengede: ";
	 cin >> x >> y;
	 for (int i = 1; i < y+1; ++i) {
		 cout << '\n';
		 for (int n = 1; n < x+1; ++n) {
			 
			 cout << setw(x)<< n * i<<' ';
		 }
	 }
 }
 double	discriminate(double a, double b, double c) {
	 return b * b - 4 * a*c;
 }
 void printRealRoots(double a, double b, double c) {
	 double losninger= discriminate(a, b, c);
	 if (losninger == 0) {
		 double root = -b / (2 * a);
		 cout << "Løsningen er x=" << root;
	 }
	 if (losninger < 0) {
		 cout << "Ingen løsninger.";
	 }
	 if (losninger > 0) {
		 double root1 = (-b + sqrt(losninger)) / (2 * a);
		 double root2 = (-b - sqrt(losninger)) / (2 * a);
		 cout<< "Løsningen er x=" << root1 << " og x=" << root2;
	 }
 }
 void solveQuadraticEquation() {
	 double a = 1;
	 double b = 3;
	 double c = 4;
	 cout << "Skriv inn a,b og c: ";
	 cin >> a >> b >> c;
	 printRealRoots(a, b, c);

 }
 vector<int> calculateSeries(int totalt_lan, int antall_avdrag, double rente) {
	 int gjenstande_lan = totalt_lan;
	 vector<int>intVector;
	 for (int i = 0; i < antall_avdrag; ++i) {
		 int innbetaling = ((totalt_lan / antall_avdrag) + (rente / 100) * gjenstande_lan);
		 gjenstande_lan = gjenstande_lan * (1 + (rente / 100));
		 gjenstande_lan -= innbetaling;
		 intVector.push_back(innbetaling);

	 }
	 return intVector;
 }
 int calculateAnnuity(int total_lan, int antall_avdrag, double rente) {
	 int innbetaling = (total_lan * ((rente / 100)) / (1 - pow(1 + (rente / 100), -antall_avdrag)));
	 return innbetaling;
 }
 void diffrence(int annuity, vector<int> serie) {
	 cout << "År\t" << "Annuitet\t" << "Serie\t" << "Differanse\n";
	 int total_diff = 0;
	 int sum_annuity = 0;
	 int sum_serie = 0;
	 for (int i = 0; i< serie.size(); ++i) {
	
		 cout << i + 1 << '\t' << annuity << '\t' << serie[i] << '\t' << serie[i] - annuity << '\n';
		 total_diff += serie[i] - annuity;
		 sum_annuity += annuity;
		 sum_serie += serie[i];
	 }
	 cout << "Total\t" << sum_annuity << '\t' << sum_serie << '\t' << total_diff;
 }
 void swapNumbers(int &a, int &b) {
	 b = a + b;
	 a = b - a;
	 b = b - a;
 }
int main(){
	//inputAndPrintInteger();
	//int number = inputInteger();
	//cout << "Du skrev: " << number;
	//inputIntegersAndPrintSum();
	/*
	for (int i = 0; i < 16; ++i) {
		cout << i <<':'<< isOdd(i)<< '\n';
	}
	printHumanReadebleTime(10000);
	inputIntegersUsingLoopAndPrintSum();
	double tall=inputDouble();
	cout << "Du skrev: " << tall;
	double veksel = NokToEuro();
	cout << "Du får " << setprecision(4)<<veksel<< " euro.";
	
	int choice = -1;
		while (choice != 0) {
			cout << "\nVelg funksjon:\n0) Avslutt\n1)Summere to tall\n2)Summere flere tall\n3)Konvertere NOK til EURO.\n4)Løse andregrads likning.\n5)Gangetabell\nAngi valg (0-5): ";
			cin >> choice;
			switch (choice)
			{
				case 0:
					break;

				case 1:
					inputIntegersAndPrintSum();
					break;
				case 2:
					inputIntegersUsingLoopAndPrintSum();
					break;
				case 3:
					 NokToEuro();
					 break;
				case 4:
					solveQuadraticEquation();
					break;
				case 5:
					gange_tabell();
					break;
				default:
					cout << "Ugyldig valg\n";
					break;
			}
		}
		*/
	//solveQuadraticEquation();
	//diffrence(calculateAnnuity(10000,10,3),calculateSeries(10000, 10, 3));
	//gange_tabell();
	int a = 1;
	int b = 3;
	vector<int> vec{ 1,2,3 };
	swapNumbers(vec[0], vec[2]);
	cout << vec[0] << vec[2];
	cout << tolower("H");
	return 0;
}