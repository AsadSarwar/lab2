#include <iostream>
using namespace std;

class Matrix{
	
	int num_of_rows, num_of_cols;
public:
	int matrixA[2][2];
	void input();
	void add(Matrix m1, Matrix m2);
	void subtract(Matrix m1, Matrix m2);
	void multiply(Matrix m, Matrix m2);
};
