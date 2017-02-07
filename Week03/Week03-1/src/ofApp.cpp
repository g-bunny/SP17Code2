#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    refCircle.set(150, 150);
//    refCircle = ofVec2f(150, 150);
    theta = 0;
    rotateRadius = 100;
    oscSpeed = 0;
}

//--------------------------------------------------------------
void ofApp::update(){
    theta += 0.05;
    oscSpeed += 1;
    
    float x = cos(theta) * rotateRadius;
    float y = sin(theta) * rotateRadius;
    
    sinCircle.set(refCircle.x + oscSpeed, (refCircle.y + y));
    cosCircle.set(refCircle.x + x, refCircle.y + oscSpeed);
    
    rotateCircle.set(refCircle.x + x, refCircle.y + y);
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofNoFill();
    
    ofSetBackgroundAuto(true);
    ofSetColor(255, 0, 0);
    ofDrawCircle(refCircle, 10);
    
    ofSetColor(0, 255, 0);
    ofDrawCircle(sinCircle, 20);
    
    ofSetColor(0, 0, 255);
    ofDrawCircle(cosCircle, 20);
    
    ofSetColor(255, 255, 0);
    ofDrawCircle(rotateCircle, 20);
    
    ofSetColor(255);
    ofDrawLine(rotateCircle, sinCircle);
    ofDrawLine(rotateCircle, cosCircle);
    
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
