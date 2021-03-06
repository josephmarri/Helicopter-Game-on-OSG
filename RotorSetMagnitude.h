// RotorSetMagnitude class. The main purpose of this class is to set any value to the rotor magnitude and update
// the magnitude from that value.
// RotorSetMagnitude class inherites from Command classs public.
//
//	created by Fares Alotaibi
//	modified by Hamad Almarri
//



#ifndef __HelicopterProject__RotorSetMagnitude_h__
#define __HelicopterProject__RotorSetMagnitude_h__

#include "Command.h"
#include "Rotor.h"


class RotorSetMagnitude : public Command {
public:
    
	RotorSetMagnitude(Rotor *rotor, float magnitude);  // main constructor passing rotor instance, and a float
	bool execute();                                    // boolean execute function
	
private:                    // two parameters float, and rotor to set the magnitude 
	Rotor *rotor;
	float magnitude;
};

#endif 
