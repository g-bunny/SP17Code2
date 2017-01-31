#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    position = ofVec2f(ofGetWindowWidth() * 0.5, ofGetWindowHeight() * 0.5);
    velocity = ofVec2f(0);
    acceleration = ofVec2f(0);
    radius = 50;
    friction = 0.99;
}

//--------------------------------------------------------------
void ofApp::update(){
    
    velocity *= friction;
    position += velocity;
//    radius = velocity.length() * 10;
    
    if(position.x >= ofGetWindowWidth() || position.x <= 0){
        //position.x = ofGetWindowWidth() -1;
        velocity.x = velocity.x * -1;
    }
    
    if(position.y >= ofGetWindowHeight() || position.y <= 0){
        //position.x = ofGetWindowWidth() -1;
        velocity.y = velocity.y * -1;
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofDrawCircle(position, radius);
    
    cout << acceleration << endl;
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
    ofVec2f mousePos = ofVec2f(x, y);
    
    acceleration = (mousePos - position)/98;
    //acceleration = 10 * acceleration.getNormalized();
    
    velocity += acceleration;
    //acceleration = position + mousePos;
    
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
