//
//  city.hpp
//  Week10
//
//  Created by Miri Park on 4/10/17.
//
//

#pragma once
#include "ofMain.h"
#define SIZEOFGRID 1000

class city{
public:
    city();
    void update(vector <float> volHistory);
    void draw();
    
    int width;
    int depth;
    int spacing;
    
    int numRows;
    int numCols;
    
    float height[SIZEOFGRID];
    
    ofBoxPrimitive box[SIZEOFGRID];
    
    int sizeOfRow;
    int sizeOfCol;
    
    ofMaterial myMaterial[SIZEOFGRID];
    
    ofVideoGrabber vid;

};
