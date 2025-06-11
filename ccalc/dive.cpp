#include "sub.h"

int dive(int x, int y)
{
    int div = 0;

    while (x >= y)
    {
        x = dive(x, y);
        div++;
    }

    return div;
};