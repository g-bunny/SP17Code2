#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
//    planet.set(ofGetWindowWidth()/2,ofGetWindowHeight()/2, 0);
//    speed = 10;
//    radius = 50;
//    orbitRadius = 200;
    
    sun.set(ofGetWindowWidth()/2, ofGetWindowHeight()/2);
    for (int i=0; i < NUMPLANETS; i++){
        planet[i].theta = TWO_PI/NUMPLANETS * i;
        planet[i].speed = 10;
        planet[i].radius = 50 + i;
        planet[i].orbitRadius = 400;
    }
}

//--------------------------------------------------------------
void ofApp::update(){
//    theta+=0.001 * speed;
//    
//    x = cos(theta) * orbitRadius;
//    z = sin(theta) * orbitRadius;
//    
//    cout<<z<<endl;
//    cout<<"planet z: " <<planet.z<<endl;
    for (int i =0; i <NUMPLANETS; i++){
        planet[i].orbit(sun);
        planet[i].update();
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
//    if(z > 0){
//      ofSetColor(255);
//      ofDrawCircle(planet,radius);
//      ofSetColor(0, 0, 255);
//      ofDrawCircle(planet.x + x,planet.y, z, radius);
//    } else {
//        ofSetColor(0, 0, 255);
//        ofDrawCircle(planet.x + x,planet.y, z, radius);
//        ofSetColor(255);
//        ofDrawCircle(planet,radius);
//    }
    ofSetColor(255, 255, 0);
    ofDrawCircle(sun, 50);
    //ofSetColor(255, 0, 0);
    for(int i =0; i < NUMPLANETS; i++){
        planet[i].draw();
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
