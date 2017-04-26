//
//  Character.hpp
//  projectionMapping
//
//  Created by Miri Park on 4/23/17.
//
//

#pragma once
#include "ofMain.h"
#define MAXIMAGES 8

class Character{
public:
    Character();
    void update();
    void display();
    void walk();
    void jump();
    
    ofImage walkCycle[MAXIMAGES];
    ofImage jumpState;
    
    //bool moveLeft;
    //bool moveRight;
    int moveState;
    
    enum moveState{
        still = 0,
        right,
        left    };
    
    
    // 0 not moving, 1 moving right, 2 moving left
    int prevMoveState;
    
    int facingDir;
    //0 right, 1 left;
    
    float displacementX;
    float displacementY;
    
    ofVec2f displacement;
    ofVec2f vel;
    ofVec2f pos;
    
    float speedX;
    float speedY;
    
    int imageIndex;
    float increment;
    
    float height;
    float width;
    
    bool directionChanged;
    
    
};
