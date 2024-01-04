#include "main.h"

/* Function to free the memory allocated for the family tree */
void freeTree(node *root) {
    if (root != NULL) {
        freeTree(root->left);  /* Recursively free the left subtree */
        freeTree(root->right); /* Recursively free the right subtree */
        free(root);            /* Free the memory of the current family member */
    }
}