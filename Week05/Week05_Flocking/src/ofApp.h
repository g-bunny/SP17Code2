#pragma once

#include "ofMain.h"
#include "boid.hpp"

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
		
    ofVec2f calculateV1(vector<boid> Boids, int index);
    ofVec2f calculateV2(vector<boid> Boids, int index);
    void calculateV3();
    
    
    float minDist;
    const int NUMBOIDS = 100;
    vector<boid> myBoids;
};
