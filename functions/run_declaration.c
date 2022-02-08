#include "declaration.h"
#include "pointer.h"
#include <stdio.h>

int main()
{
    int (*fnc)(int,int) = funret(2);
    printf("%d output\n", fnc(10,1));
    show_linked_list();
    return 0;
}