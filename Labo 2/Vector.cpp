//
//  Vector.cpp
//  Labo 2
//
//  Created by Damiaan Dufaux on 17/02/15.
//  Copyright (c) 2015 Damiaan Dufaux. All rights reserved.
//

#include "Vector.h"

Vector::Vector(double x, double y, double z) {
	setX(x);
	setY(y);
	setZ(z);
}

Vector::Vector(double coordinates[]){
	setX(coordinates[0]);
	setY(coordinates[1]);
	setZ(coordinates[2]);
}

float Vector::length() const {
	return std::sqrt(x*x + y*y + z*z);
}

void Vector::print() const {
	std::cout << "Vector(" << getX() << ", " << getY() << ", " << getZ() << ")\n";
}