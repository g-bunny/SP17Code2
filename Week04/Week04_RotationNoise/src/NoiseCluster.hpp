//
//  NoiseCluster.hpp
//  Week04_RotationNoise
//
//  Created by Miri Park on 2/13/17.
//
//

#pragma once
#include "ofMain.h"

class NoiseCluster {
public:
    NoiseCluster();
    void orbit(ofVec2f center);
    float noiseColor (float xOff);
    void draw();
    void update();
    
    float speed, radius, orbitRadius;
    float x, y, theta;
    ofVec2f position;
    ofVec2f center;
    float xOff, start, inc;
    
    float randomRange;
    
};
