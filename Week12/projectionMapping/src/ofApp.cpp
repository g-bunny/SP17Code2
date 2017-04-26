#include "ofApp.h"
#define MAXIMAGES 8

ofImage walk[MAXIMAGES];

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetWindowTitle("ofxSyphon Example");
    
    mainOutputSyphonServer.setName("Screen Output");
    individualTextureSyphonServer.setName("Texture Output");
    
    mClient.setup();
    //using Syphon app Simple Server, found at http://syphon.v002.info/
    mClient.set("","Simple Server");
    
    tex.allocate(200, 100, GL_RGBA);
    
    ofSetFrameRate(60); // if vertical sync is off, we can go a bit fast... this caps the framerate at 60fps.
    
    walk[0].load("bunnySprite0.png");
    walk[1].load("bunnySprite1.png");
    walk[2].load("bunnySprite2.png");
    walk[3].load("bunnySprite3.png");
    walk[4].load("bunnySprite4.png");
    walk[5].load("bunnySprite5.png");
    walk[6].load("bunnySprite6.png");
    walk[7].load("bunnySprite7.png");
    
    imageIndex = 0;
    rawIndex = 0;
    
    this->first = new ColorArea(blue, 0, 400, 400);
    this->second = new ColorArea(red, 400, 400, 400);
    this->third = new ColorArea(purple, 800, 400, 400);
}

//--------------------------------------------------------------
void ofApp::update(){
    mirisBunny.update();
}

//--------------------------------------------------------------
void ofApp::draw(){

    unsigned char pixels[200*100*4];
    
    for (int i = 0; i < 200*100*4; i++)
    {
        pixels[i] = (int)(255 * ofRandomuf());
    }
    tex.loadData(pixels, 200, 100, GL_RGBA);
    tex.draw(50, 50);

//    for(int i = 0; i < MAXIMAGES; i++){
//        walk[i].draw(100,100);
//    }

    first->display();
    second->display();
    third->display();

    
    mirisBunny.display();
    mirisBunny.walk();
    
    mClient.draw(50, 50);
    
    mainOutputSyphonServer.publishScreen();

    individualTextureSyphonServer.publishTexture(&tex);
    
    ofDrawBitmapString("Note this text is not captured by Syphon since it is drawn after publishing.\nYou can use this to hide your GUI for example.", 150,500);
    
    cout << rawIndex << endl;
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    
    if(key == OF_KEY_RIGHT){
        mirisBunny.moveState = 1;
    } else if (key == OF_KEY_LEFT){
        mirisBunny.moveState = 2;
    }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    mirisBunny.moveState = 0;
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
