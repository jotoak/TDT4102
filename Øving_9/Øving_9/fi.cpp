#include "fi.h"
void fillInFibonacciNumbers(int result[], int length) {
	int last = 0;
	for (int i = 0; i < 10; ++i) {
		result[i] = last + i;
		last += i;
	}
}

void printArray(int arr[], int length) {
	for (int i = 0; i < 10; ++i) {
		std::cout << arr[i] << " ";
	}
}

void createFibonacci() {
	int lenght = 0;
	std::cout << "Hvor lang skal tabellen være? ";
	std::cin >> lenght;
	int *numbers = new int[lenght] {};
	fillInFibonacciNumbers(numbers, lenght);
	printArray(numbers, lenght);

	delete[] numbers;
	numbers = nullptr;
}