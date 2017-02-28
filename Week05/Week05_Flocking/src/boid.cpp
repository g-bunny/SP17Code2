//
//  boid.cpp
//  Week05_Flocking
//
//  Created by Miri Park on 2/27/17.
//
//

#include "boid.hpp"

boid::boid(){
    pos = ofVec2f(ofGetWindowWidth()/2 + ofRandom(-300 , 300), ofGetWindowHeight()/2 + ofRandom(-300,300));
    vel = ofVec2f(0);
}

void boid::update(){
    
}

void boid::drawBoid(){
    ofDrawCircle(pos, size);
    
}

void boid::move(){
    vel = vel + v1 + v2 + v3;
    pos = pos + vel;
}
