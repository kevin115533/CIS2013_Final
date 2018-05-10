#include <iostream>
#include "Motorcycle.h"
using namespace std;


Motorcycle::~Motorcycle() {

}

void Motorcycle::setColor(string x) {
	color = x;
}

string Motorcycle::getColor() {
	return color;
}

void Motorcycle::setYear(int x) {
	year = x;
}

int Motorcycle::getYear() {
	return year;
}

void Motorcycle::setMake(string x) {
	make = x;
}

string Motorcycle::getMake() {
	return make;
}

void Motorcycle::setModel(string x) {
	model = x;
}

string Motorcycle::getModel() {
	return model;
}

void Motorcycle::printBike() {
	cout << color << " " << year << " " << make << " " << model << endl;
}
