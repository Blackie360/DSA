#include "main.h"

/* Function to perform an inorder traversal of a binary tree */
void inorder(node *root)
{
    /* Check if the current node is NULL (base case for recursion) */
    if (root == NULL)
    {
        return; /* If it is, return and exit the function */
    }

    /* Recursively call inorder on the left subtree */
    inorder(root->left);

    /* Print the data of the current node */
    printf("Data: %d\n", root->data);

    /* Recursively call inorder on the right subtree */
    inorder(root->right);
}
