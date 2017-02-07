//
//  Planet.hpp
//  Week03-2
//
//  Created by Miri Park on 2/6/17.
//
//

#pragma once
#include "ofMain.h"
#include "Moon.hpp"

class Planet{
public:
    Planet();
    void update();
    void orbit(ofVec2f reference);
    void draw();
    
    ofVec2f position;
    ofVec2f reference;
    float radius;
    float orbitRadius;
    float speed;
    float theta;
    
    Moon myMoon;
};
