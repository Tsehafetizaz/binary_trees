#include "binary_trees.h"

int bst_util(const binary_tree_t *tree, int min, int max);

/**
* binary_tree_is_bst - Checks if a binary tree is a valid Binary Search Tree
* @tree: Pointer to the root node of the tree to check
*
* Return: 1 if tree is a valid BST, 0 otherwise
*/
int binary_tree_is_bst(const binary_tree_t *tree)
{
return (bst_util(tree, INT_MIN, INT_MAX));
}

/**
* bst_util - Helper function to check each node
* @tree: Node to check
* @min: Minimum allowed value
* @max: Maximum allowed value
*
* Return: 1 if node satisfies BST properties, 0 otherwise
*/
int bst_util(const binary_tree_t *tree, int min, int max)
{
if (!tree)
return (1);
if (tree->n <= min || tree->n >= max)
return (0);
return (bst_util(tree->left, min, tree->n) &&
bst_util(tree->right, tree->n, max));
}
