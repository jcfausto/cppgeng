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

 DisplayManager::DisplayManager(const int displayWidth, const int displayHeight) :
    _displayWidth(displayWidth), 
    _displayHeight(displayHeight)
{ 
    const char* MAIN_WINDOW_TITLE = "C++ 3D Game Engine";

    //Init SDL
	SDL_Init(SDL_INIT_VIDEO);

    _display = SDL_CreateWindow(MAIN_WINDOW_TITLE,
                              SDL_WINDOWPOS_CENTERED, 
                              SDL_WINDOWPOS_CENTERED, 
                              _displayWidth, 
                              _displayHeight,
                              SDL_WINDOW_OPENGL);

};

 DisplayManager::~DisplayManager() {};

 SDL_Window* DisplayManager::getDisplay() {
    return this->_display;
 };