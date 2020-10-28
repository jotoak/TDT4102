#pragma once
#include <iostream>
class Matrix {
private:
	double *i;
	int row;
	int col;
public:
	Matrix();
	Matrix(int nRows, int nColumns);
	explicit Matrix(int nRows);
	~Matrix();
	double get(int row, int ncol) const;
	void set(int row, int ncol, double value);	int getRows()const;
	int getColumns()const;
	bool isValid()const;
	Matrix(const Matrix& m);
};

std::ostream& operator<<(std::ostream& out, const Matrix& matrix);