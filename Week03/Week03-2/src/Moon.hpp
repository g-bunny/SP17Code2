//
//  Moon.hpp
//  Week03-2
//
//  Created by Miri Park on 2/6/17.
//
//

#pragma once
#include "ofMain.h"

class Moon{
public:
    Moon();
    void orbit(ofVec3f center);
    void update();
    void draw();
    
    ofVec3f position;
    ofVec3f center;
    float radius;
    float orbitRadius;
    float speed;
    float theta;
    
};
