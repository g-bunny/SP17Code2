//
//  Planet.cpp
//  Week03-2
//
//  Created by Miri Park on 2/6/17.
//
//

#include "Planet.hpp"

Planet::Planet(){
    //theta = 0;
    myMoon.orbitRadius = 100;
    myMoon.radius = 25;
    myMoon.theta = 0;
    myMoon.speed = 2;
}

void Planet::update(){
    theta += (0.001 * speed);
    myMoon.update();
    cout<<myMoon.position.z<<endl;
}

void Planet::orbit(ofVec2f reference){
    float x = cos(theta) * orbitRadius;
    float y = sin(theta) * orbitRadius;
    position.set(reference.x + x, reference.y + y);
    
    myMoon.orbit(position);
}

void Planet::draw(){
    if(myMoon.position.z >0){
    ofSetColor(255,0,0);
    ofDrawCircle(position, radius);
    ofSetColor(255);
    myMoon.draw();
    } else {
        ofSetColor(255);
        myMoon.draw();
        ofSetColor(255,0,0);
        ofDrawCircle(position, radius);
    }
}
