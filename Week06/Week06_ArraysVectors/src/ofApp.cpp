#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
//    int myArray[10];
//    for (int i = 0; i < sizeof(myArray); i++){
//        myArray[i] = i;
//    }
//    
    //cout << myArray[1] << endl;
//    for (int i = 0; i < 10; i++){
//        bunny[i].load("bunny.png");
//    }
//    
//    cout << sizeof(bunny) << endl;
    //rabbit.size = 100;
    bunny.load("bunny");
    
    for (int i = 0; i < 100; i++){
        rabbit.push_back(bunny);
        rabbit[i].load("bunny.png");
    }
}

//--------------------------------------------------------------
void ofApp::update(){
}

//--------------------------------------------------------------
void ofApp::draw(){
//    for(int i =0; i < 10; i++){
//        bunny[i].draw(i * 100, i * 100);
//    }
    
    for(int i = 0; i < rabbit.size(); i++){
        rabbit[i].draw(10 + i, 10 + i, i* 10, i* 10);
    }
}

ofImage ofApp::createRabbit(ofImage myImage){
    myImage.load("bunny.png");
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
    //rabbit.push_back(createRabbit(bunny));
//    for (int i = 0; i < rabbit.size(); i++){
//        rabbit[rabbit.size() - 1].draw(x,y);
//    }
    
    rabbit.pop_back();
    
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
