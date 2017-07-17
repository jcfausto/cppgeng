/**
 * main.cpp
 * Author: codingwings
 * License: Zlib license.
 * Date: 08/07/2017
 * Main entry point for the Tile Map Engine
 */

#include "globals/display_globals.h"
#include "managers/display_manager.h"

#include <stdio.h>
#include <SDL2/SDL.h>

using namespace Globals;
using namespace Managers;

int main(int argc, char* argv[]) {

	//https://cboard.cprogramming.com/c-programming/172594-debugger-crashes-raiseexception.html
	//Uncoment the line below if you want to debug this program on Windows.
	SDL_SetHint(SDL_HINT_WINDOWS_DISABLE_THREAD_NAMING, "1");

	DisplayManager* displayManager = new DisplayManager(Globals::Display::DISPLAY_WIDTH, 
		Globals::Display::DISPLAY_HEIGHT);

	//TODO: Move the event handling to the display manager.
	SDL_Event event;

	while (true) {

		while (SDL_PollEvent(&event)) {
			switch (event.type) {
				case SDL_QUIT: {
					//Release any allocated resource
					SDL_DestroyWindow(displayManager->getDisplay());

					return 0;
				}
			}
		}

	}

	return 0; //Exit the program
}



