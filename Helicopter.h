//
//  Helicopter.h
//
//  Created by Fares Alotaibi on 2014-03-02.
//  SID: 200288569
//

#ifndef __HelicopterProject__Helicopter_h__
#define __HelicopterProject__Helicopter_h__

#include "Joystick.h"
#include "Rotor.h"
#include "Model.h"
#include "Observer.h"
#include "RK4.h"
#include "WorldConstants.h"

class Helicopter : public Model, public Observer {
public:
    Helicopter();
    void Update(Event event);
	
	Joystick* getJoystick();
	Rotor* getRotor();
	
private:
	Joystick *joystick;
    Rotor *rotor;
    Motion *motion;
};


#endif
