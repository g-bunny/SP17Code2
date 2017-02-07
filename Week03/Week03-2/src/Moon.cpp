//
//  Moon.cpp
//  Week03-2
//
//  Created by Miri Park on 2/6/17.
//
//

#include "Moon.hpp"

Moon::Moon(){
    
}

void Moon::update(){
    theta += 0.05 * speed;
}

void Moon::orbit(ofVec3f center){
    float x = cos(theta) * orbitRadius;
    float z = sin(theta) * orbitRadius;
    position.set(center.x + x, center.y, z);
}

void Moon::draw(){
    //ofSetColor(255);
    ofDrawCircle(position, radius);
}
