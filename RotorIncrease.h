//	See main.cpp file header for credits
// RotorIncrease class inheretes from a Command class. The main purpose of this class is to call the increase function
// of a rotor instance and increase the rotor as a result of that.
//
//	created by Hamad Almarri
//	modified by Fares Alotaibi
//


#ifndef __HelicopterProject__RotorIncrease_h__
#define __HelicopterProject__RotorIncrease_h__

#include "Command.h"
#include "Rotor.h"

// inheretance from Command class public
class RotorIncrease : public Command {
public:
	RotorIncrease(Rotor *rotor);            // a constructor passing an instance of a rotor
	bool execute();                         // a boolean function
    
private:                                    // one private member of Rotor instance 
	Rotor *rotor;
};

#endif 
