#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    //cout<< ofRandom(100)<<endl;
    scale = 10;
    cols = floor(ofGetWindowWidth()/scale);
    rows = floor(ofGetWindowHeight()/scale);
    
    ofSetFrameRate(60);
}

//--------------------------------------------------------------
void ofApp::update(){
    
//    x = ofRandom(ofGetWindowWidth());
    

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    for(int y =0; y < rows; y++){
        for(int x = 0; x < cols; x++){
            ofSetColor(ofRandom(255), ofRandom(255), ofRandom(255));
            ofDrawRectangle(x * scale, y * scale, scale, scale);
        }
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
