#include <iostream>
#include <SDL2/SDL.h>

int main(int argc, char **argv){
    if (SDL_Init(SDL_INIT_EVERYTHING) != 0)
    {
        std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;
        return 1;
    }

    //The window we'll be rendering to
     SDL_Window* window = NULL;
    // The surface contained by the window
    SDL_Surface* screenSurface = NULL;

    window = SDL_CreateWindow( "SDL Tutorial", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 1080, 720, SDL_WINDOW_SHOWN );

    //Get window surface
    screenSurface = SDL_GetWindowSurface( window );
    //Fill the surface white
    SDL_FillRect( screenSurface, NULL, SDL_MapRGB( screenSurface->format, 0xAA, 0xFF, 0xFF ) );
    //Update the surface
    SDL_UpdateWindowSurface( window );
    //Wait two seconds
    SDL_Delay( 2000 );

    SDL_Quit();

    return 0;
}