// Example program in TDT4102_Graphics template, from PPP page 415
#include "Graph.h"
#include "Simple_window.h" 
#include "loan_drawer.h"

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

int main() {
	vector<int> serie = calculateSeries(10000, 10, 3);
	vector<int> ann;
	for (int i = 0; i < 10; ++i) {
		ann.push_back(calculateAnnuity(10000, 10, 3));
	}
	drawPlot(ann, serie, 10000, 10);
}

