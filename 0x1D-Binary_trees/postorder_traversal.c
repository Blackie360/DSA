#include "main.h"

/* Function to perform a postorder traversal of a binary tree */
void postorder(node *root)
{
    /* Check if the current node is NULL (base case for recursion) */
    if (root == NULL)
    {
        return; /* If it is, return and exit the function */
    }

    /* Recursively call postorder on the left subtree */
    postorder(root->left);

    /* Recursively call postorder on the right subtree */
    postorder(root->right);

    /* Print the data of the current node */
    printf("Data: %d\n", root->data);
}
