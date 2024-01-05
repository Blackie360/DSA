#include "main.h"

/* Function to perform a preorder traversal of a binary tree */
void preorder(node *root)
{
    /* Check if the current node is NULL (base case for recursion) */
    if (root == NULL)
    {
        return; /* If it is, return and exit the function */
    }

    /* Print the data of the current node */
    printf("data: %d\n", root->data);

    /* Recursively call preorder on the left subtree */
    preorder(root->left);

    /* Recursively call preorder on the right subtree */
    preorder(root->right);
}
