/*
 * File:   cApp.h
 * Author: daniel
 *
 * Created on November 24, 2014, 4:28 PM
 */
#pragma once

#include <iostream>

#define SCREEN_WIDTH 640
#define SCREEN_HEIGHT 480
#define SCREEN_FPS 60

class cApp {
public:
    cApp();
    ~cApp();

    /*void Run( int argc, char* args[] );
    bool Init( int argc, char* args[] );
    void Input(unsigned char key, int x, int y);
    void Update();
    void Draw();
    void loop(int val);*/
private:
   // bool InitGL();

    bool m_Running;
};