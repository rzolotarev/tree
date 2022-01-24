#include <stdio.h>
#include <stdlib.h>

struct item
{
    int val;
    struct item *left;
    struct item *right;
};

void int_bin_tree_add(struct item **root, int n)
{    
    if (!*root) {
        *root = malloc(sizeof(struct item));
        (*root)->val = n;
        (*root)->left = NULL;
        (*root)->right = NULL;        
        return;
    }

    if ((*root)->val == n) {
        printf("the value with number %d already exists \n", n);
        return;
    }
    if ((*root)->val > n) {        
        int_bin_tree_add(&(*root)->left, n);
    } else {
        int_bin_tree_add(&(*root)->right, n);
    }
};

void traverse_bin_tree(struct item *root)
{
    if (!root) {
        return;
    }
    traverse_bin_tree(root->left);
    fprintf(stdout, "reached value %d \n", root->val);
    traverse_bin_tree(root->right);
}

int main()
{   
    struct item* root = NULL;     
    int_bin_tree_add(&root, 10);
    int_bin_tree_add(&root, 5);
    int_bin_tree_add(&root, 15);
    int_bin_tree_add(&root, 15);
    int_bin_tree_add(&root, 20);
    int_bin_tree_add(&root, 4);
    int_bin_tree_add(&root, 6);
    traverse_bin_tree(root);
    return 0;
}