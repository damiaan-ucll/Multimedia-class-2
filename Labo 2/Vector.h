//
//  Vector.h
//  Labo 2
//
//  Created by Damiaan Dufaux on 17/02/15.
//  Copyright (c) 2015 Damiaan Dufaux. All rights reserved.
//

#ifndef __Labo_2__Vector__
#define __Labo_2__Vector__

#include <stdio.h>
#include <iostream>
#include <cmath>

class Vector{
	
	int x, y, z;
	
public:
	
	Vector(double x=0, double y=0, double z=0);
	Vector(double coordinates[]);
	
	// Getters
	double getX() const {return x;};
	double getY() const {return y;};
	double getZ() const {return z;};
	
	//Setters
	void setX(double x) {this->x = x;};
	void setY(double y) {this->y = y;};
	void setZ(double z) {this->z = z;};
	//Convenience setters
	void setCoordinates(double coordinates[]);
	
	// Computations
	float length() const;
	
	void print() const;
	
};

#endif /* defined(__Labo_2__Vector__) */