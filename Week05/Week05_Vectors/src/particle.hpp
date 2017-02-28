//
//  particle.hpp
//  Week05_Vectors
//
//  Created by Miri Park on 2/27/17.
//
//

#pragma once
#include "ofMain.h"

class particle {
public:
    particle(ofVec2f pos);
    void update(float changeInVel);
    void draw();
    void applyForce(ofVec2f force);
    
    ofVec2f myPos, myVel, myAccel;
    float myLifeSpan;

    const float INTIAL_LIFE_SPAN = 100.0f;
};
