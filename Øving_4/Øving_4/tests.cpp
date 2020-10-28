#include "tests.h"
#include "std_lib_facilities.h"
#include "utilities.h"


void testCallByValue() {
	int v0 = 5;
	int increment = 2;
	int iterations = 10;
	int result = incrementByValueNumTimes(v0, increment, iterations);
	cout << "v0: " << v0
		<< " increment: " << increment
		<< " iterations: " << iterations
		<< " result: " << result << endl;
}void testCallbyReference() {
	int v0 = 5;	int increment = 2;	int iterations = 10;	incrementByValueNumTimesRef(v0, increment, iterations);	int result = v0;	cout << "v0: " << v0
	<< " increment: " << increment
	<< " iterations: " << iterations
		<< " result: " << result << endl;	}void testVectorSorting() {
	vector<int> percentages{ };	randomizeVector(percentages, 10);	printVector(percentages);	cout << "Bytte om første og andre ellement\n";	swapNumbers(percentages[0], percentages[1]);	printVector(percentages);	cout << "Vektoren sotert i stigende rekkefølge\n";	sortVector(percentages);	printVector(percentages);	cout << "median" << medianOfVector(percentages)<<'\n';}void testString() {
	string grades = randomizeString(8, 'A', 'E');	cout << grades<<'\n';}