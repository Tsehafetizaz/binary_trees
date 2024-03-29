#include "binary_trees.h"

/**
* binary_tree_height - Measures the height of a binary tree
* @tree: Pointer to the root node of the tree to measure the height
*
* Return: The height of the tree. If tree is NULL, return 0.
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left_height, right_height;

if (tree == NULL)
return (0);

/* Base case: if there are no children, return 0 */
if (tree->left == NULL && tree->right == NULL)
return (0);

/* Recursively calculate the height of the left and right subtrees */
left_height = binary_tree_height(tree->left);
right_height = binary_tree_height(tree->right);

if (left_height > right_height)
return (left_height + 1);
else
return (right_height + 1);
}
