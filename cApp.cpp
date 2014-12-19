/*
 * File:   cApp.cpp
 * Author: daniel
 *
 * Created on November 24, 2014, 4:28 PM
 */

#include "cApp.h"

cApp::cApp()
{
}

cApp::~cApp()
{
}
/*
void cApp::Run( int argc, char* args[] )
{
    std::cout << "Run start" << std::endl;
    m_Running = true;
    Init(argc, args);
}

bool cApp::Init( int argc, char* args[] )
{
    //Initialize FreeGLUT
    glutInit( &argc, args );

    //Create OpenGL 2.1 context
    glutInitContextVersion( 2, 1 );

    //Create Double Buffered Window
    glutInitDisplayMode( GLUT_DOUBLE );
    glutInitWindowSize( SCREEN_WIDTH, SCREEN_HEIGHT );
    glutCreateWindow( "OpenGL" );

    //Do post window/context creation initialization
    if( !InitGL() )
    {
        std::cout << "Unable to initialize graphics library!" << std::endl;
        return 1;
    }else std::cout << "Initialized openGL" << std::endl;

    //Wrapper::u = this;

    // Set input function
    glutKeyboardFunc(Wrapper::Input);

    //Set rendering function
    glutDisplayFunc( Wrapper::Draw );

    //Set main loop
    glutTimerFunc( 1000 / SCREEN_FPS, Wrapper::loop, 0 );

    //Start GLUT main loop
    glutMainLoop();

    return true;
}

void cApp::loop(int val)
{
    //Frame logic
    Update();
    Draw();

    //Run frame one more time
    glutTimerFunc( 1000 / SCREEN_FPS, Wrapper::loop, val );
}

bool cApp::InitGL()
{
    glMatrixMode( GL_PROJECTION );
    glLoadIdentity();

    //Initialize Modelview Matrix
    glMatrixMode( GL_MODELVIEW );
    glLoadIdentity();

    //Initialize clear color
    glClearColor( 0.f, 0.f, 0.f, 1.f );

    //Check for error
    GLenum error = glGetError();
    if( error != GL_NO_ERROR )
    {
        std::cout << "Error initializing OpenGL!" << std::endl;
        return false;
    }

    return true;
}

void cApp::Input(unsigned char key, int x, int y)
{
    if(key == 27)
    {
        exit(10);
    }
}

void cApp::Update()
{
    //m_Running = true;
}

void cApp::Draw()
{
    //Clear color buffer
    glClear( GL_COLOR_BUFFER_BIT );

    //Render quad
    glBegin( GL_QUADS );
    glVertex2f( -0.5f, -0.5f );
    glColor3f(0,0,1);
    glVertex2f(  0.5f, -0.5f );
    glVertex2f(  0.5f,  0.5f );
    glVertex2f( -0.5f,  0.5f );
    glEnd();

    //Update screen
    glutSwapBuffers();
}
*/