//	See main.cpp file header for credits

#include "RotorIncrease.h"


RotorIncrease::RotorIncrease(Rotor *rotor) {
	this->rotor = rotor;
}



bool RotorIncrease::execute() {
	this->rotor->increaseMagnitude();
	
	return true;
}