//
//  particleSystem.cpp
//  Week05_Vectors
//
//  Created by Miri Park on 2/27/17.
//
//

#include "particleSystem.hpp"


particleSystem::particleSystem(ofVec2f pos){
    myPos = pos;
}

void particleSystem::update(ofVec2f force){

    if(myParticles.size() < MAX_SIZE){
        particle myParticle(myPos);
        myParticles.push_back(myParticle);
    }

    for(int i = 0; i <myParticles.size(); i++){
        myParticles[i].applyForce(force);
        float distance = (myParticles[i].myPos - myPos).length();
        float changeInVel = ofMap(distance, 0, 200, 4, 0);
        
        myParticles[i].update(changeInVel);
    }
    
}

void particleSystem::draw(){
    for(int i=0; i < myParticles.size(); i++){
        myParticles[i].draw();
    }
    
}
