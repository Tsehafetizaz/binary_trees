#include "binary_trees.h"

/**
* binary_tree_levelorder - Goes through tree using level-order traversal
* @tree: pointer to the root node of the tree to traverse
* @func: pointer to a function to call for each node's value
*/
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
const binary_tree_t *temp;
const binary_tree_t *queue[1024];
int start = 0, end = 0;

if (!tree || !func)
return;

queue[end++] = tree; /* Enqueue root */

while (start < end)
{
temp = queue[start++]; /* Dequeue node */

func(temp->n); /* Process node */

if (temp->left)
queue[end++] = temp->left; /* Enqueue left child */
if (temp->right)
queue[end++] = temp->right; /* Enqueue right child */
}
}
