//
//  city.cpp
//  Week10
//
//  Created by Miri Park on 4/10/17.
//
//

#include "city.hpp"


city::city(){
    //sizeOfGrid = 1000;
    
    width = 10;
//    height = 200;
    depth = 10;
    spacing = 10;
    
    numRows = SIZEOFGRID / 10;
    numCols = SIZEOFGRID / numRows;
    
    sizeOfRow = 10;
    sizeOfCol = 10;

    
    for (int i = 0; i < SIZEOFGRID; i ++){

        int xPos = (i% sizeOfRow) * width + (i% sizeOfRow) * spacing;
        int yPos = floor(i/(sizeOfRow * sizeOfCol) * (depth + spacing));
        int zPos = floor((i%(sizeOfRow * sizeOfCol))/sizeOfCol) * (width + spacing);
        
        box[i].setPosition (xPos, yPos, zPos);
    }
    
    vid.setVerbose(true);
    vid.setup(320, 240);

}

void city::update(vector <float> volHistory){
    vid.update();
    for (int i = 0; i < SIZEOFGRID; i++){
        height[i] = volHistory[i];
    }
}

void city::draw(){
    for (int i = 0; i < SIZEOFGRID; i ++){
        myMaterial[i].begin();

        myMaterial[i].setDiffuseColor(vid.getPixels().getColor((i%100) * 768));

        box[i].set(height[i], height[i], height[i]);
        box[i].draw();
        
            myMaterial[i].end();
    }

}
