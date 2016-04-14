#include "ofApp.h"

void ofApp::setup(){
    pct = 0;
    Circle.pos.x = 10;
    Circle.pos.y = 10;
}

//--------------------------------------------------------------
void ofApp::update(){
    pct +=0.005;
    
    if(pct>1){
        pct = -pct;
    }
    
    Circle.interpolateByPct(pct);
//    Circle.zenoToPoint(ofGetWidth(), 0);
}

//--------------------------------------------------------------
void ofApp::draw(){
//    ofTranslate(ofGetWidth()/2, 10);
    Circle.draw();
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
