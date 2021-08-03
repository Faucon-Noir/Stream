#ifndef WINDOW
#define WINDOW
#include <SDL.h>

#define WINDOW_WIDTH 480
#define WINDOW_HEIGHT 360
#define WINDOW_NAME "DVC"

typedef struct
{
    SDL_Renderer *renderer;
    SDL_Window *window;
} Win;

#endif /*Window*/