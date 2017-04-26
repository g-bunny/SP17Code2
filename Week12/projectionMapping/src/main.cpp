#include "ofMain.h"
#include "ofApp.h"
//#include "ofAppGlutWindow.h"
//========================================================================
int main( ){
    
//    ofAppGlutWindow window; // create a window
//    window.setGlutDisplayString("rgb double depth alpha");

	ofSetupOpenGL(1200,900,OF_WINDOW);			// <-------- setup the GL context

	// this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
	ofRunApp(new ofApp());

}
