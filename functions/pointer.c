
#include "stdio.h"
struct item
{
    int data;
    struct item* next;
};

void delete_from_int_list(struct item **pcur, int (*crit)(int));
int is_negative(int x) 
{
    return x < 0;
}

int main()
{
    struct item *m1 = malloc(sizeof(struct item));
    m1->data = 5;
    struct item *m2 = malloc(sizeof(struct item));
    m2->data = -1;
    m1->next = m2;
    struct item *m3 = malloc(sizeof(struct item));
    m3->data = 10;
    m2->next = m3;
    m3->next = NULL;
    delete_from_int_list(&m1, is_negative);
}

// *pcur - указывает на структуру с данными
// но *pcur надо менять и чтобы его менять, необходимо хранить
// **pcur
void delete_from_int_list(struct item **pcur, int (*crit)(int))
{
    while(*pcur){
        if ((*crit)((*pcur)->data)) {
            printf("%d passed\n", (*pcur)->data);
            *pcur = (*pcur)->next;
        } else {
            printf("%d not passed\n", (*pcur)->data);
            pcur = &(*pcur)->next;
        }
    }
}
