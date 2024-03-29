#include "binary_trees.h"

/**
* binary_tree_size - Measures the size of a binary tree
* @tree: Pointer to the root node of the tree to measure the size
*
* Return: The size of the tree. If tree is NULL, return 0.
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
size_t left_size, right_size;

if (tree == NULL)
return (0);

/* Recursively calculate the size of the left and right subtrees */
left_size = binary_tree_size(tree->left);
right_size = binary_tree_size(tree->right);

return (left_size + right_size + 1);
}
