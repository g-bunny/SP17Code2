//
//  Character.cpp
//  projectionMapping
//
//  Created by Miri Park on 4/23/17.
//
//

#include "Character.hpp"

Character::Character(){
    walkCycle[0].load("bunnySprite0.png");
    walkCycle[1].load("bunnySprite1.png");
    walkCycle[2].load("bunnySprite2.png");
    walkCycle[3].load("bunnySprite3.png");
    walkCycle[4].load("bunnySprite4.png");
    walkCycle[5].load("bunnySprite5.png");
    walkCycle[6].load("bunnySprite6.png");
    walkCycle[7].load("bunnySprite7.png");
    
    width = walkCycle[0].getWidth();
    height = walkCycle[0].getHeight();
//    for (int i = 0; i < MAXIMAGES; i++){
//        walkCycle[i].mirror(false, true);
//    }
    
    pos = ofVec2f(500,500);
    directionChanged = false;
    moveState = still;
}

void Character::update(){
    
    increment += .15;
    
    imageIndex = int(floor(increment)) % 8;
}

void Character::display(){
    ofSetColor(255);
    ofPushMatrix();
    ofTranslate(-width/4, -height/2);

    ofPopMatrix();
    
    if(moveState == right){
        walkCycle[imageIndex].draw(pos, width /2, height/2);
    } else if (moveState == left){
        
        walkCycle[imageIndex].draw(pos, width /2, height/2);
    } else {
        walkCycle[0].draw(pos, width /2, height/2);
    }
    
    if(moveState != prevMoveState && moveState != still){
        for( auto &i: walkCycle ){
            i.mirror(false, true);
        }

    }
    
    if(moveState != still){
        prevMoveState = moveState;
    }
    
    if (pos.x> 1200){
        pos.x = 0;
    } else if (pos.x == 0){
        pos.x = 1200;
    }
}

void Character::walk(){
    if(moveState == 0){
        
    } else if (moveState == right){
        for (int i = 0; i < MAXIMAGES; i++){
            pos.x += .25;
        }
    } else if (moveState == left){
        for (int i = 0; i < MAXIMAGES; i++){
            //walkCycle[i].mirror(true, false);
            pos.x -= .25;
        }
    }
}

void Character::jump(){
    
}
