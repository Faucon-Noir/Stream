#include input.h

int input_handler()
{
    SD_Event event;

    SDL_PollEvent(&event);
    switch (event.type)
    {
    case /* constant-expression */:
        /* code */
        break;

    default:
        break;
    }
}