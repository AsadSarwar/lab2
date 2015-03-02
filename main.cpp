
#include <iostream>
#include "mycode.h"

int main() {
        Matrix m1,m2,m3;
	m1.input();
	m2.input();
	m3.add(m1,m2);
	m3.subtract(m1,m2);
	m3.multiply(m1,m2);

  return 0;
}
