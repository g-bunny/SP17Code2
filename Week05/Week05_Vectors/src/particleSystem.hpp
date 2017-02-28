//
//  particleSystem.hpp
//  Week05_Vectors
//
//  Created by Miri Park on 2/27/17.
//
//

#pragma once
#include "ofMain.h"
#include "particle.hpp"

class particleSystem{
public:
    particleSystem(ofVec2f pos);
    
    void update(ofVec2f force);
    void draw();
    
    vector<particle> myParticles;
    
    const int MAX_SIZE = 100;
    ofVec2f myPos;
    
    
};
