#include <iostream>
#include "matrix.h"
#include "dummy.h"
using namespace std;
int main() {
	/*cout << "Hello World!\n";
	Matrix a = Matrix::Matrix(5);
	cout << a;
	cout << a.get(1,1);
	int i;
	cin>>i;*/
	//dummyTest();
	Matrix A = Matrix::Matrix(2);
	A.set(0, 1, 2.0);
	A.set(1, 0, 3.0);
	A.set(1, 1, 4.0);
	cout << A;
	cout << A.get(0, 1);
	return 0;
}