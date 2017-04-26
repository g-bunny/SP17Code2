//
//  ColorArea.cpp
//  projectionMapping
//
//  Created by Miri Park on 4/23/17.
//
//

#include "ColorArea.hpp"

ColorArea::ColorArea(ofColor color, int xPos, int yPos, float size){
    this->color = color;
    this->xPos = xPos;
    this->yPos = yPos;
    this->size = size;
}

void ColorArea::display(){
    ofSetColor(color);
    ofDrawRectangle(xPos, yPos, size, size);
}
