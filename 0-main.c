#include "binary_trees.h"

/**
 * Arduino main function - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    binary_tree_t *root;

    root = createBinaryTreeNode(NULL, 98);

    root->left = createBinaryTreeNode(root, 12);
    root->left->left = createBinaryTreeNode(root->left, 6);
    root->left->right = createBinaryTreeNode(root->left, 16);

    root->right = createBinaryTreeNode(root, 402);
    root->right->left = createBinaryTreeNode(root->right, 256);
    root->right->right = createBinaryTreeNode(root->right, 512);

    printBinaryTree(root);
    return 0;
}

