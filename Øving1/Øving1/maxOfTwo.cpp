#include "std_lib_facilities.h"
double maxOfTwo (double a, double b) {
	if (a > b) {
		cout << "A is greater than B\n";
		return a;
	}
	else {
		cout <<"B is greater than or equal to A\n";
		return b;
	}
}

int fiobonacci(int n) {
	int a = 0;
	int b = 1;
	cout << "Fiobonacci numbers:\n";
	for (int x = 1; x < n + 1; ++x) {
		cout << x << ' ' << b <<'\n';
		int temp = b;
		b += a;
		a = temp;
	}
	cout << "----\n";
	return b;
}

int squareNumberSum(int n) {
	int totalsum = 0;
	for (int i = 0; i < n+1; ++i) {
		totalsum += i* i;
			cout << i * i << '\n';
	}
	cout << totalsum << '\n';
	return totalsum;
}

void triangelNumbersBelow(int n) {
	int acc = 1;
	int num = 2;
	cout << "Triangel numbers below " << n << ' ';
	while (acc < n) {
		cout << acc <<':';
		acc += num;
		num += 1;
	}

}

bool isPrime(int n) {
	for (int j = 2; j < n; ++j) {
		if (n%j == 0) {
			return false;
		}
	}
	return true;
}

int naviePrimeNumberSearch(int n) {
	for (int number = 2; number < n; ++number) {
		if (isPrime(number)) {
			cout << number << " is a prime\n";
		}
	}
	return 0;
}
int findGreatestDivisor(int n) {
	for (int divisor = n - 1; divisor > 0; --divisor) {
		if (n % divisor == 0) {
			return divisor;
		}
	}
}
int main() {
	cout << "Oppgave a)\n";
		cout << maxOfTwo(5, 6) << '\n';
	cout << "Oppgave c)\n";
	fiobonacci(5);
	cout << "\nOppgave d) \n";
	squareNumberSum(3);
	cout << "\nOppgave e) \n";
	triangelNumbersBelow(5);
	cout << "\nOppgave f) \n";
	cout << isPrime(3) << '\n';
	cout << "Oppgave g) \n";
	naviePrimeNumberSearch(5);
	cout << "\nOppgave h) \n";
	cout << findGreatestDivisor(10) << '\n';
		return 0;
}