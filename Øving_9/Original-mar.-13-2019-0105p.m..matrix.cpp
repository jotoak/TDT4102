#include "matrix.h"

Matrix::Matrix() :i{ nullptr }, row{ 0 }, col{ 0 }{}

Matrix::Matrix(int nRows, int nColumns) {
	row = nRows;
	col = nColumns;
	i = new double[nRows];
	for (int k = 0; k < nRows*nColumns; ++k) {
		i[k]=0;
		}
	}


Matrix::Matrix(int nRows) {
	i = new double[nRows];
	row = nRows;
	col = nRows;
	for (int r = 0; r < nRows; ++r) {
		for (int k = 0; k < nRows; ++k) {
			if (k == r) {
				i[r*col+k] = 1;
			}
			else {
				i[r*col+k] = 0;
			}
		}
	}
}
Matrix::~Matrix() {
	delete[] i;
	i = nullptr;

}

double Matrix::get(int row, int ncol)const {
	return i[row*col+ncol];

}
void Matrix::set(int row, int ncol, double value) {	i[row*col + ncol] = value;}int Matrix::getRows()const { return row; }int Matrix::getColumns()const { return col; }bool Matrix::isValid()const {	if (i == nullptr) {		return false;	}	else {		return true;	}}std::ostream& operator<<(std::ostream& out, const Matrix& matrix) {
	if (matrix.isValid()) {
		int row = matrix.getRows();
		int col = matrix.getColumns();
		for (int i = 0; i < row; ++i) {
			for (int j = 0; j < col; ++j) {
				out << matrix.get(i,j) << " ";
			}
			out << "\n";
		}	}	else {		out << "Invalid";	}	return out;}