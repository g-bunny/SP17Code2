//
//  ColorArea.hpp
//  projectionMapping
//
//  Created by Miri Park on 4/23/17.
//
//

#pragma once
#include "ofMain.h"

class ColorArea{
public:
    ColorArea(ofColor color, int xPos, int yPos, float size);
    void display();
    ofColor color;
    int xPos;
    int yPos;
    float size;
    
};
