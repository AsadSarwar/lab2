#include<iostream>
#include "mycode.h"
using namespace std;

void Matrix :: input()
	{
			for(int j=0; j<2; j++)
			{
				matrixA[i][j]=1;
			}
	}

	void Matrix :: add(Matrix m1, Matrix m2)
	{
			for(int i=0; i<2; i++){
				for(int j=0; j<2; j++)
				{
					matrixA[i][j]=m1.matrixA[i][j]+m2.matrixA[i][j];
				}
		}
		
		
	}
	void Matrix :: subtract(Matrix m1, Matrix m2)
	{
			for(int i=0; i<2; i++){
				for(int j=0; j<2; j++)
				{
					matrixA[i][j]=m1.matrixA[i][j]-m2.matrixA[i][j];
				}	
		}
		
		
	}

	void Matrix :: multiply(Matrix m1,Matrix m2)
	{
			for(int i=0; i<2; i++)
				for(int j=0;j<2; j++)
				{
					matrixA[i][j]=0;
					for(int k=0; k<2; k++)
					{
						matrixA[i][j]= matrixA[i][j]+(m1.matrixA[i][k]*m2.matrixA[k][j]);
					}
				}
			
			
	}

