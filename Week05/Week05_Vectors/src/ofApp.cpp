#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
//    for (int i =0; i < MAX_SIZE; i++){
//        myFloats.push_back(ofRandom(100));
//    }
    
    gravity = ofVec2f( 0.f, .1f);
    
}

//--------------------------------------------------------------
void ofApp::update(){

    for(int i = 0; i <mySystems.size(); i++){
        mySystems[i].update(gravity);
    }

}

//--------------------------------------------------------------
void ofApp::draw(){
    for(int i=0; i < mySystems.size(); i++){
        mySystems[i].draw();
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
    particleSystem myParticleSystem(ofVec2f(x,y));
    mySystems.push_back(myParticleSystem);


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
