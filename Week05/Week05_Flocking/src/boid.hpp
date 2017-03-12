//
//  boid.hpp
//  Week05_Flocking
//
//  Created by Miri Park on 2/27/17.
//
//

#pragma once
#include "ofMain.h"

class boid{
public:
    boid();
    void update();
    void drawBoid();
    void move();
    void wrapAround();
    
    
    ofVec3f pos, vel;
    ofVec3f v1, v2, v3;
    ofVec3f destination;
    
    
    
    int size = 4;
    float friction = 0.4;
};
