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
void Matrix::set(int row, int ncol, double value) {	i[row*col + ncol] = value;}int Matrix::getRows()const { return row; }int Matrix::getColumns()const { return col; }bool Matrix::isValid()const {	if (i == nullptr) {		return false;	}	else {		return true;	}}

Matrix::Matrix(const Matrix & m):i{nullptr}
{
	this->i = new double{};
	*i = m.get(0, 0);
}Matrix& Matrix::operator=(Matrix m) {	std::swap(i, m.i);	return *this;}Matrix& Matrix::operator+=(const Matrix& m) {	if (row == m.row and col == m.col) {		for (int k = 0; k < row*col; ++k) {			m.i[k] += i[k];		}		return *this;	}	else {		i = nullptr;		return *this;	}}Matrix Matrix::operator+(const Matrix& m)const{	if (row == m.row and col == m.col) {		Matrix result = m;		result += *this;		return *this;	}}std::ostream& operator<<(std::ostream& out, const Matrix& matrix) {
	if (matrix.isValid()) {
		int row = matrix.getRows();
		int col = matrix.getColumns();
		for (int i = 0; i < row; ++i) {
			for (int j = 0; j < col; ++j) {
				out << matrix.get(i,j) << " ";
			}
			out << "\n";
		}	}	else {		out << "Invalid";	}	return out;}