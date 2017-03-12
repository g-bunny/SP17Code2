//pseudocode for forces from http://www.vergenet.net/~conrad/boids/pseudocode.html

#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    minDist = 50;
    for(int i = 0; i <NUMBOIDS; i++){
        myBoids.push_back(boid());
    }
    
}

//--------------------------------------------------------------
void ofApp::update(){
    for (int i = 0; i < NUMBOIDS; i++){
        myBoids[i].v1 = calculateV1(myBoids, i);
        myBoids[i].v2 = calculateV2(myBoids, i);
        myBoids[i].v3 = calculateV3(myBoids, i);
        myBoids[i].update();
        myBoids[i].move();
        
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    for (int i = 0; i < NUMBOIDS; i++){
        myBoids[i].drawBoid();
    }
}


ofVec3f ofApp::calculateV1(vector<boid> Boids, int index){
    //PROCEDURE rule1(boid bJ)
    //Vector pcJ
    //FOR EACH BOID b
    //IF b != bJ THEN
    //			pcJ = pcJ + b.position
    //END IF
    //END
    
    //pcJ = pcJ / N-1
    
    //RETURN (pcJ - bJ.position) / 100
    
    //END PROCEDURE
    
    ofVec3f pCenter;
    int count = 0;
    
    for(int i = 0; i < Boids.size(); i++){
        if(i != index){
            if((Boids[i].pos).distance(Boids[index].pos) < minDist){
                count ++;
                pCenter += Boids[i].pos;
            }
        }
    }
    pCenter = pCenter / count;
    return (pCenter - Boids[index].pos).getNormalized();


}

ofVec3f ofApp::calculateV2(vector<boid> Boids, int index){
//    PROCEDURE rule2(boid bJ)
//    Vector c = 0;
//    FOR EACH BOID b
//    IF b != bJ THEN
//				IF |b.position - bJ.position| < 100 THEN
//    c = c - (b.position - bJ.position)
//				END IF
//    END IF
//    END
//
//    RETURN c
//
//    END PROCEDURE

    ofVec3f dist;
  
    for(int i = 0; i < Boids.size(); i++){
        if(i != index){
            if((Boids[i].pos).distance(Boids[index].pos) < minDist){
                
                dist = dist - (Boids[i].pos - Boids[index].pos);
            }
        }
    }
    return dist.getNormalized();

}
//PROCEDURE rule3(boid bJ)
//
//Vector pvJ
//
//FOR EACH BOID b
//IF b != bJ THEN
//pvJ = pvJ + b.velocity
//END IF
//END
//
//pvJ = pvJ / N-1
//
//RETURN (pvJ - bJ.velocity) / 8
//
//END PROCEDURE
//This is similar to Rule 1, however instead of averaging the positions of the other boids we average the velocities. We calculate a 'perceived velocity', pvJ, then add a small portion (about an eighth) to the boid's current velocity.


ofVec3f ofApp::calculateV3(vector<boid> Boids, int index){
    ofVec3f pAveVel;
    int count = 0;
    for(int i = 0; i < Boids.size(); i++){
        if(i != index){
            if((Boids[i].pos).distance(Boids[index].pos) < minDist){
                count ++;
                pAveVel += Boids[i].vel;
            }
        }
    }
    pAveVel = pAveVel / count;
    return (pAveVel - Boids[index].vel).getNormalized();
}

void ofApp::addDirection(ofVec3f dir){
    for(int i = 0 ; i < myBoids.size(); i++){
        myBoids[i].destination += dir;
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    ofVec3f mouseDirection = ofVec3f(x - ofGetWindowWidth()/2, y - ofGetWindowHeight()/2, ofRandom(-100, 100));
    mouseDirection = mouseDirection.getNormalized();
    addDirection(mouseDirection);
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
