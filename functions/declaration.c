#include <stdio.h>

int sum(int x, int y)
{
    return x + y;
}

int substract(int x, int y)
{
    return x - y;
}

// funret - это функция, которая принимает один параметр и возвращает указатель на функцию
// которая принимает два параметра и возвращает один int параметр
int (*funret(int x))(int,int)
{
    printf("%d input\n", x);
    if (x > 0)
        return substract;
    return sum;
}

int main()
{
    int (*fnc)(int,int) = funret(2);
    printf("%d output", fnc(10,1));
    return 0;
}

