#include "binary_trees.h"

/**
* binary_tree_balance - Measures the balance factor of a binary tree
* @tree: Pointer to the root node of the tree to measure the balance factor
*
* Return: Balance factor, or 0 if tree is NULL
*/
int binary_tree_balance(const binary_tree_t *tree)
{
int left_height, right_height;

if (!tree)
return (0);

left_height = tree->left ? (int)binary_tree_height(tree->left) + 1 : 0;
right_height = tree->right ? (int)binary_tree_height(tree->right) + 1 : 0;

return (left_height - right_height);
}
