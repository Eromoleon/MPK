#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include<io.h>

// standardkonstruktor: automatisch 
// eigene konstruktor: parameters einstellen

// const:kann nicht verändert werden!
// void: typenüberprüfung passiert nicht!! attól még lehet returnje!! 
// void pointer: nem kell tudni, hogy milyen típusú lesz a return
// copy constructor
using namespace std;

// initialisation list:
class Ratio {
public:
	Ratio() :num(0), den(1) {

	}
	Ratio(int n) :num(n), den(1)
	{}
	Ratio(int n, int d) :num(n), den(d)
	{}
	void print() {
		cout << num<<'/' << den<<std::endl;
	}
private:
	int num, den;
};


class Point {
public:
	Point(int x, int y) {
		itsX = x;
		itsY = y;
	};
	~Point() {};
private:
	int itsX;
	int itsY;
};
/*
class Rectangle {
	Rectangle(int left, int right, int top, int buttom) {};
	~Rectangle() {};
private:
	int itsLeft;
	int itsRight;
	int itsTop;
	int itsButtom;

	Point itsTopLeft;
	Point itsTopRight;
	Point itsBottomLeft;
	Point itsBottomRight;
};
*/
class Cat {
public: 
	Cat(int initialAge){
		itsAge = initialAge;
	};
	~Cat(){};

private:
	int itsAge;
	int itsWeight;

};



int main(char argc, char*argv) {
	printf("Hello!");
	Cat Frisky(3);

	Ratio x, y(4), z(22, 7);
	x.print(), y.print(), z.print();
	scanf("Enter data: ");

	return(0);

}
