#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetBackgroundColor(0);
}

//--------------------------------------------------------------
void ofApp::update(){
    for (int i = 0; i < set.size(); i++){
        set[i].update();
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetBackgroundAuto(false);
    for( int i = 0; i < set.size(); i++){
        set[i].draw();
    }
    
    cout<<set.size()<<endl;
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
    set.push_back(NoiseCluster());
    set[set.size()-1].center = ofVec2f(x,y);
    set[set.size()-1].randomRange = ofRandom(600);
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
