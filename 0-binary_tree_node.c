#include "binary_trees.h"

/**
 * createBinaryTreeNode - creates a binary tree node for Arduino
 * @parent: pointer to the parent node
 * @value: the value to assign to the node
 * Return: a pointer to the newly created node
 */
binary_tree_t *createBinaryTreeNode(binary_tree_t *parent, int value)
{
    binary_tree_t *newNode = NULL;

    newNode = (binary_tree_t *)malloc(sizeof(binary_tree_t));
    if (!newNode)
        return NULL;
    
    newNode->parent = parent;
    newNode->n = value;
    
    return newNode;
}
