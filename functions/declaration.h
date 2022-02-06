#ifndef DECLARATION_H_SENTRY
#define DECLARATION_H_SENTRY

struct item
{
    int data;
    struct item* next;
};

int (*funret(int x))(int,int);

#endif