#include "main.h"

int main(void) 
{
    node *root = NULL; /* Initialize the family tree to be empty*/
    
    /* Call the create function to build the family tree*/
    root = create();

if (root != NULL) 
    {
        printf("Family Tree:\n");
        display(root, 0); /* Display the family tree */
    }
    else 
    {
        printf("Tree is empty.\n");
    }

    return 0;
}