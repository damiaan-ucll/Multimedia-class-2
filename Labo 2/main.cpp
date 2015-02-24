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
	float a = 1;
	float b = 2;
	cout << "Before swap: " << a << " and " << b << endl; swap(a,b);
	cout << "After swap: " << a << " and " << b << endl;
}

int main(int argc, const char * argv[]) {
	//ex2();
	//ex3();
	ex4();
	
    return 0;
}