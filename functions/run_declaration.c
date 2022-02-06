#include "declaration.h"
#include <stdio.h>

int main()
{
    int (*fnc)(int,int) = funret(2);
    printf("%d output", fnc(10,1));
    return 0;
}