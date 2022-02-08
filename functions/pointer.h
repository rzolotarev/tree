#ifndef POINTER_H_SENTRY
#define POINTER_H_SENTRY
#include "declaration.h"
void delete_from_int_list(struct item **pcur, int (*crit)(int));

void show_linked_list();

#endif