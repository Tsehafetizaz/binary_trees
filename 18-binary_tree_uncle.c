#include "binary_trees.h"

/**
* binary_tree_uncle - Finds the uncle of a node
* @node: Pointer to the node to find the uncle
*
* Return: Pointer to the uncle node, NULL if no uncle or if node is NULL
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
if (!node || !node->parent || !node->parent->parent)
return (NULL);

return (binary_tree_sibling(node->parent));
}
