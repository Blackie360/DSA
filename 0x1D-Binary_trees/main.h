#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

typedef struct node 
{
    int data;
    struct node *left;
    struct node *right;
}node;

node *create();
void display(node *root, int level);
void freeTree(node *root);

#endif