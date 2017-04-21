#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    mySoundPlayer.load("meow.wav");
    mySoundPlayer.setMultiPlay(true);
    mySoundStream.setup(this, 0, 2, 44100, 256, 4);
    
    bufferSize = 256;
    
    left.assign(bufferSize, 0);
    right.assign(bufferSize, 0);
    volHistory.assign(1000, 0);
    
    ofSetVerticalSync(true);
    cam.setDistance(0);
    cam.enableMouseInput();
    cout << cam.getFov() << endl;
    cam.setFov(60);
    cout << cam.getFarClip() <<endl;
    
    
    pointLight.setPosition(0, ofGetWindowHeight()/2, 0);
    
    pointLight.setDiffuseColor(ofColor(255,255,255));
    pointLight.setSpecularColor(ofColor(255,255,255));
    
    myMaterial.setShininess(120);
    //myMaterial.setDiffuseColor(ofColor(0,255,0));
    //myMaterial.setEmissiveColor(ofColor(0,0,255));
    

    

}

//--------------------------------------------------------------
void ofApp::update(){
    cout << vol << endl;
    scaledVol = ofMap(vol, 0, 0.17, 10, 50);
    volHistory.push_back(scaledVol);
    
    if(volHistory.size() >= 100){
        volHistory.erase(volHistory.begin(), volHistory.begin() +1);
    }
    
    myCity.update(volHistory);
//    vid.update();
    
//    for ( int i = 0; i < 324 * 240; i++){
//        cout << "pixel color at  "<< i << vid.getPixels().getColor(i) << endl;
//    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    cam.begin();
    
//    vid.draw(100,100);
    
    ofPushMatrix();
    ofEnableLighting();
    pointLight.enable();
    pointLight.draw();
    
    ofTranslate(- ofGetWindowWidth()/2, 0);
    
    
    myMaterial.begin();
    //myMaterial.setEmissiveColor(ofColor(0,255,0));
        myCity.draw();
    myMaterial.end();
    ofPopMatrix();
    cam.end();
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
    mySoundPlayer.setSpeed(ofMap(x, 0, ofGetWindowWidth(), 0, 5));
    mySoundPlayer.play();
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

void ofApp::audioIn(float * input, int bufferSize, int nChannels){
    
    float currentVol = 0;
    
    int numCounted = 0;
    
    for(int i = 0; i< bufferSize; i++){
        left[i] = input[i*2]*0.5;
        right[i] = input[i*2 +1] * 0.5;
        
        numCounted += 2;
        
        currentVol += left[i] * left[i];
        currentVol += right[i] * right[i];
        
        currentVol /= numCounted;
        
        currentVol = sqrt(currentVol);
        
        vol = currentVol;
        vol *= 0.9;
        vol += 0.07 * currentVol;
        
    }
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
