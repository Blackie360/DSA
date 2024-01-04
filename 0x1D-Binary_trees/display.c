#include "main.h"

/* Function to display the family tree in a beautiful format */
void display(node *root, int level) {
    if (root != NULL) {
        display(root->right, level + 1); /* Display the right subtree */

        for (int i = 0; i < level; i++) {
            printf("    "); /* Adjust indentation based on the level */
        }

        printf("%d\n", root->data); /* Display the data of the current family member */

        display(root->left, level + 1); /* Display the left subtree */
    }
}