#include <stdio.h>
#include "window.h"

int main()
{
    Win *app = malloc(sizeof(Win));
    if (initSDL(app) < 0)
    {
        return -1;
    }

    return 0;
}