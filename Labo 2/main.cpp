//
//  main.cpp
//  Labo 2
//
//  Created by Damiaan Dufaux on 17/02/15.
//  Copyright (c) 2015 Damiaan Dufaux. All rights reserved.
//

#include <iostream>
#include "Vector.h"

using namespace std;

void ex2() {
	const Vector v1;
	v1.print();
	cout << "length: " << v1.length() << endl;
	
	int x, y, z;
	cout << "Enter coordinates of a vector:\nx: ";
	cin >> x;
	cout << "y: ";
	cin >> y;
	cout << "y: ";
	cin >> z;
	
	
	Vector v2 = Vector(x, y, z);
	v2.print();
	cout << v2.length() << endl;
	
	double coordinates[] = {2,4,6};
	Vector v3 = Vector(coordinates);
	v3.print();
}

void ex3 () {
	int b = 5, c = 15;
	int * ptr1, * ptr2;
	ptr1 = &b;
	ptr2 = &c;
	*ptr1 = 10;
	*ptr2 = *ptr1;
	ptr1 = ptr2;
	*ptr1 = 20;
	std::cout << b << std::endl << c << std::endl;
}

void swap(float *x, float *y) {
	float *temp = x;
	*x = *y;
	*y = *temp;
}

void ex4() {
	float a = 8;
	float b = 2;
	cout << "Before swap:\t" << a << " and " << b << endl;
	swap(a, b);
	cout << "After swap:\t" << a << " and " << b << endl;
}

void ex5 (){
	int a = 5;
	int b = 6;
	int* p = &a;
	int* q = &b;
	int **r = &p;
	int **s = &q;
	int c = 7;
	*r = &c;
	r = s;
	**r = 8;
	*s = &a;
	*p = 9;
	**s = 10;
	cout << a << endl << b << endl << c << endl;
}

void pascalTriangle(unsigned size) {
	unsigned triangle[size][size];
	triangle[0][0] = triangle[1][0] = triangle[1][1] = 1;
	
	for (unsigned i = 0; i<size; ++i) {
		for (unsigned j = 0; j<=i; ++j) {
			if (j==0 || i==j) {
				triangle[i][j] = 1;
			} else {
				triangle[i][j] = triangle[i-1][j] + triangle[i-1][j-1];
			}
			cout << triangle[i][j] << ' ';
		}
		cout << endl;
	}
}

void pascalTriangle2(unsigned size) {
	unsigned faculties[size];
	faculties[0] = 1;
	cout << 1 << endl;
	for (unsigned i = 1; i<size; ++i) {
		faculties[i] = faculties[i-1] * i;
		for (unsigned j = 0; j<=i; ++j) {
			cout << faculties[i] / (faculties[j]* faculties[i-j] ) << " ";
		}
		cout << endl;
	}
}

int main(int argc, const char * argv[]) {
	//ex2();
	//ex3();
	ex4();
	//ex5();
	
//	pascalTriangle2(8);
	
	
    return 0;
}