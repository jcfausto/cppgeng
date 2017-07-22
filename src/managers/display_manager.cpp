/**
 * display_manager.cpp
 * Author: codingwings
 * License: Zlib license.
 * Date: 17/07/2017
 * Display manager implementation
 */

#include "display_manager.h"

#include <SDL2/SDL.h>

using namespace Managers;

DisplayManager::DisplayManager() {};

DisplayManager::DisplayManager(Display* display) :
    _display(display) 
{
    this->createDisplay(this->_display);
};

void DisplayManager::createDisplay(Display* display) 
{ 

    //Init SDL
	bool isSDLVideoInitialized = (SDL_Init(SDL_INIT_VIDEO) == 0);

    if (isSDLVideoInitialized) {
        this->_display->window = SDL_CreateWindow(this->_display->displayTitle,
                                SDL_WINDOWPOS_CENTERED, 
                                SDL_WINDOWPOS_CENTERED, 
                                this->_display->displayWidth, 
                                this->_display->displayHeight,
                                SDL_WINDOW_OPENGL);
    } else {
        SDL_Log("Unable to initialize SDL Video: %s", SDL_GetError());
        return;
    }
};

 DisplayManager::~DisplayManager() {};

 Display* DisplayManager::getDisplay() {
    return this->_display;
 };

 void DisplayManager::closeDisplay(Display* display) {
     SDL_DestroyWindow(display->window);
 }