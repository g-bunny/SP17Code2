#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    cRadius = 200;
//    posX = 250;
//    posY = 250.5;
    myFont.loadFont("Arial.ttf", 30);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(255,0,0);
//    ofNoFill();
    ofSetCircleResolution(100);
    ofDrawCircle(posX, posY, C_RADIUS);
    cout << "posX: " << posX << endl;
    ofDrawBitmapString("Hello World", posX + 100, posY + 100);
    myFont.drawString("Prettier Font!", posX - 100, posY - 100);
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
    posX = ofGetMouseX();
    posY = ofGetMouseY();
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
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
