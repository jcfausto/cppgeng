/**
 * main.cpp
 * Author: codingwings
 * License: Zlib license.
 * Date: 08/07/2017
 * Main entry point for the Tile Map Engine
 */

#include <stdio.h>
#include <SDL2/SDL.h>
#include "print.h"

int main(int argc, char* argv[]) {

	//https://cboard.cprogramming.com/c-programming/172594-debugger-crashes-raiseexception.html
	//Uncoment the line below if you want to debug this program on Windows.
	SDL_SetHint(SDL_HINT_WINDOWS_DISABLE_THREAD_NAMING, "1");

	SDL_Window* window;
	SDL_Event event;


	//Screen resolution
	const int SCREEN_WIDTH = 640;
	const int SCRENN_HEIGHT = 480;
	const char* MAIN_WINDOW_TITLE = "Tile Map Engine";

	//Init SDL
	SDL_Init(SDL_INIT_VIDEO);

	window = SDL_CreateWindow(MAIN_WINDOW_TITLE, SDL_WINDOWPOS_CENTERED,
			SDL_WINDOWPOS_CENTERED, SCREEN_WIDTH, SCRENN_HEIGHT, SDL_WINDOW_OPENGL);

	while (true) {

		while (SDL_PollEvent(&event)) {
			switch (event.type) {
				case SDL_QUIT: {
					//Release any allocated resource
					SDL_DestroyWindow(window);
					
					Print p;
					p.printMessage("Done!");

					return 0;
				}
			}
		}

	}

	return 0; //Exit the program
}



