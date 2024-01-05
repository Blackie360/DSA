#include "main.h"

/* Function to create a binary tree resembling a family tree */
node *create() 
{
    int x;

    /* Create a new family member, analogous to a new person in the family tree */
    node *newnode = malloc(sizeof(node));

    if (newnode == NULL) 
    {
        /* If adding a family member fails, indicate an issue in the family expansion */
        printf("Error: Failed to add a new family member.\n");
        exit(EXIT_FAILURE);
    }

    /* Ask for information about the family member to be added (-1 to stop adding) */
    printf("Enter data (-1 to stop): ");
    scanf("%d", &x);

    if (x == -1) 
    {
        free(newnode); /* If the decision is made to stop adding, remove the last family member */
        return NULL;   /* Signal the end of family expansion */
    }

    /* Assign the details of the family member to the newly added member */
    newnode->data = x;

    /* Recursively add left and right family members, mirroring the expansion on each side */
    printf("Enter left child of %d:\n", x);
    newnode->left = create();

    printf("Enter right child of %d:\n", x);
    newnode->right = create();

    return (newnode); /* Return the fully expanded family tree */
}
