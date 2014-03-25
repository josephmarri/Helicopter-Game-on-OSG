//
//  HelicopterMotion.cpp
//
//  Created by Hamad Almarri on 1/31/2014.
//

#include "Motion.h"


Motion::Motion(osg::Vec3f initialPosition) {
	this->initialPosition = initialPosition;
}



void Motion::setNetForce(osg::Vec3f netForce) {
	this->netForce.set(netForce);
}




osg::Vec3f Motion::getCurrentVelocity() {
	return this->lastVelocity;
}





