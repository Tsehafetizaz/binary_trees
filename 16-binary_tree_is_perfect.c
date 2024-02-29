#include "binary_trees.h"

/**
* binary_tree_is_perfect - Checks if a binary tree is perfect
* @tree: Pointer to the root node of the tree to check
*
* Return: 1 if perfect, 0 otherwise or if tree is NULL
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
size_t depth = binary_tree_depth(tree);
return (is_perfect(tree, depth, 0));
}

/**
* is_perfect - Helper function to check if a binary tree is perfect
* @tree: Pointer to the current node
* @depth: Depth of the tree
* @level: Current level in the tree
*
* Return: 1 if perfect, 0 otherwise
*/
int is_perfect(const binary_tree_t *tree, size_t depth, size_t level)
{
if (!tree)
return (1);

if (!tree->left && !tree->right)
return (depth == level + 1);

if (!tree->left || !tree->right)
return (0);

return (is_perfect(tree->left, depth, level + 1)
&& is_perfect(tree->right, depth, level + 1));
}
