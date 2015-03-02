#include <limits.h>
#include "mycode.h"
#include "gtest/gtest.h"


TEST(AddTest2, Blah) {
 	Matrix a,b,c;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			a.matrixA[i][j]=1;
			b.matrixA[i][j]=1;		
		}	
	}
	c.add(a,b);
	
	EXPECT_EQ(c.matrixA[0][0],2);
	EXPECT_EQ(c.matrixA[0][1],2);
	EXPECT_EQ(c.matrixA[1][0],2);
	EXPECT_EQ(c.matrixA[1][1],2);
}
TEST(SUBTest2, Blaash) {
 	Matrix a,b,c;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			a.matrixA[i][j]=1;
			b.matrixA[i][j]=1;		
		}	
	}
	c.subtract(a,b);
	
	EXPECT_EQ(c.matrixA[0][0],0);
	EXPECT_EQ(c.matrixA[0][1],0);
	EXPECT_EQ(c.matrixA[1][0],0);
	EXPECT_EQ(c.matrixA[1][1],0);
}
TEST(MULTest2, Blaash) {
 	Matrix a,b,c;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			a.matrixA[i][j]=1;
			b.matrixA[i][j]=1;		
		}	
	}
	c.multiply(a,b);
	
	EXPECT_EQ(c.matrixA[0][0],2);
	EXPECT_EQ(c.matrixA[0][1],2);
	EXPECT_EQ(c.matrixA[1][0],2);
	EXPECT_EQ(c.matrixA[1][1],2);
	
}
