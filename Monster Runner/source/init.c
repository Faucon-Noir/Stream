#include "init.h"

int initSDL(Win *app)
{
    if (SDL_init(SDL_INIT_VIDEO) < 0)
    {
        printf("Erreur à l'initialisation SDL: %s\n", SDL_GetError());
        return -1;
    }
    app->window = SDL_CreateWindow(WINDOW_NAME, SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, WINDOW_WIDTH, WINDOW_HEIGHT, 0);

    if (!app->window)
    {
        printf("Echec à l'ouverture de la fenêtre de résolution %d x %d : %s\n", WINDOW_WIDTH, WINDOW_HEIGHT, SDL_GetError());
        return -1;
    }
    app->renderer = SDL_CreateRenderer(app->window, -1, SDL_RENDERER_ACCELERATED);
    if (!app->renderer)
    {
        printf("Echec à la création du renderer: %s\n", SDL_GetError());
        return -1;
    }
    return 0;
}