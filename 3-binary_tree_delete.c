#include "binary_trees.h"
#include <stdlib.h>

/**
* binary_tree_delete - Deletes an entire binary tree
* @tree: Pointer to the root node of the tree to delete
*
* Description: Recursively traverses the binary tree in post-order to delete
* every node. Post-order traversal ensures that the children of a node are
* deleted before the node itself, preventing dangling pointers.
*/
void binary_tree_delete(binary_tree_t *tree)
{
if (tree != NULL)
{
/* Recursively delete left subtree */
binary_tree_delete(tree->left);

/* Recursively delete right subtree */
binary_tree_delete(tree->right);

/* Delete current node */
free(tree);
}
}
