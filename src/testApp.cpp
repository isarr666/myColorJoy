#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    ofBackground(0);
    ofSetVerticalSync(TRUE);
    ofEnableAlphaBlending();
    time=0.06;
    ofSetFrameRate(60);
}

//--------------------------------------------------------------
void testApp::update(){

    circle.x = (1-time) * circle.x + (time) * mouseX;
    circle.y = (1-time) * circle.y + (time) * mouseY;
//    circle1.x= (1-time) * circle.x + (time) * mouseX;
//    circle1.y = (1-time) * circle.y + (time) * mouseY;
//    circle2.x = (1-time) * circle.x + (time) * mouseX;
//    circle2.y = (1-time) * circle.y + (time) * mouseY;
    
    float dx = circle.x - prevPos.x;
    float dy = circle.y - prevPos.y;
    angle = atan2(dy, dx);
    prevPos=circle;

}

//--------------------------------------------------------------
void testApp::draw(){
    
    
    
    ofSeedRandom(0);
    
 
    
    float step=20;
    for (int i=0; i<200; i++) {
        for (int j=0; j<100; j++) {
            pos.x=i*20;
            pos.y=j*20;
            
            
            
            
            
            mouse.x=mouseX;
            mouse.y=mouseY;
            int distance= (mouse - pos).length();
            distance=ofMap(distance, 0, 100, 0, 255);
            distance=ofClamp(distance, 0, 255);
            
            
            ofSetColor(i*5, j*10, ofMap(i, 0, ofGetWidth()/20, 255, 0), distance*3+60);
            ofTriangle(i*step, j*step, (i+1)*step, j*step, (i+0.5)*step, (j+0.5)*step);
            
            ofSetColor(i*5, j*10, ofMap(i, 0, ofGetWidth()/20, 255, 0), distance/2+10);
            ofTriangle((i-0.5)*step, (j+0.5)*step, (i+0.5)*step, (j+0.5)*step, (i)*step, (j+1)*step);

            ofSetColor(i*5, j*10, ofMap(i, 0, ofGetWidth()/20, 255, 0), distance/2-40);
            ofTriangle(i*step, j*step, (i+0.5)*step, (j+0.5)*step, i*step, (j+0.5)*step);
            
            ofSetColor(i*5, j*10, ofMap(i, 0, ofGetWidth()/20, 255, 0), distance/2-40);
            ofTriangle((i+0.5)*step, (j+0.5)*step, (i+0.5)*step, (j+1)*step, (i+0.5)*step, (j+1)*step);
            
            
            
            ofSetLineWidth(1);
            ofSetColor(255);
            
            int q= ofRandom(6);
            
            ofRect(i*step*10+q*20, j*step*5+q*40, q*40, 20);
            // ofRect(ofRandom(0,1000), ofRandom(0,900), 20, ofRandom(20, 100));
            
            
            //   ofSetRectMode(OF_RECTMODE_CENTER);
//            
//            ofNoFill();
//            ofPushMatrix();
//            ofRotateZ(angle * RAD_TO_DEG);
//            ofTranslate(circle.x, circle.y);
//            //ofCircle(0, 0, 20);
//            ofTriangle(0, 0, -20, 20, 20, 20);
//            ofPopMatrix();
//            ofFill();
//            
            
        }
    }
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}
