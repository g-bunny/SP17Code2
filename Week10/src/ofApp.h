#pragma once

#include "ofMain.h"
#include "city.hpp"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
        void audioIn(float * input, int bufferSize, int nChannels);

    ofSoundPlayer mySoundPlayer;
    ofSoundStream mySoundStream;
    
    float bufferCounter;
    vector <float> left;
    vector <float> right;
    vector <float> volHistory;
    
    int bufferSize;
    float vol;
    float scaledVol;
    
    
    //ofBoxPrimitive
    ofEasyCam cam;
    ofLight pointLight;
    ofMaterial myMaterial;
    
    city myCity;
    
    ofVideoGrabber vid;
    
};
