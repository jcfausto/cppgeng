/**
 * display_manager.h
 * Author: codingwings
 * License: Zlib license.
 * Date: 17/07/2017
 * Display manager class
 */

#ifndef MANAGERS_DISPLAY_MANAGER_H_
#define MANAGERS_DISPLAY_MANAGER_H_

#include <SDL2/SDL.h>

namespace Managers {

    class DisplayManager {
        public:
            //Constructors
            DisplayManager();
            DisplayManager(const int displayWidth, const int displayHeight);

            //Destructor
            ~DisplayManager();

            /* void createDisplay
             * Creates the display
             */
            void createDisplay();

            /* void updateDisplay
             * Updates the display on each new frame
             */
            void updateDisplay();

            /* void closeDisplay
             * Execute any clean up before closing the display
             */
            void closeDisplay();

            /* SDL_Window* getDisplay
             * Returns _display
             */
             SDL_Window* getDisplay();

        protected:
        private:
            //Display dimensions
            int _displayWidth;
            int _displayHeight;

            //SDL Window handler
            SDL_Window* _display;
    };

}

#endif /* MANAGERS_DISPLAY_MANAGER_H_ */