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

    /* strcut Display
     * Represents the display object. Contains a pointer to the window 
     * and window's width and height
     */
    struct Display {
        SDL_Window* window;
        int displayWidth;
        int displayHeight;
        const char* displayTitle;
    };

    class DisplayManager {
        public:
            //Constructors
            DisplayManager();
            DisplayManager(Display* display);

            //Destructor
            ~DisplayManager();

            /* void createDisplay
             * Creates the display
             */
            void createDisplay(Display* display);

            /* void updateDisplay
             * Updates the display on each new frame
             */
            void updateDisplay();

            /* void closeDisplay
             * Execute any clean up before closing the display
             */
            void closeDisplay(Display* display);

            /* Display* getDisplay
             * Returns _display
             */
             Display* getDisplay();

        protected:
        private:
            //Display object
            Display* _display;
    };

}

#endif /* MANAGERS_DISPLAY_MANAGER_H_ */