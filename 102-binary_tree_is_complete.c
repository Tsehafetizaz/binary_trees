#include "binary_trees.h"

/**
* binary_tree_is_complete - Checks if a binary tree is complete
* @tree: Pointer to the root node of the tree to check
*
* Return: 1 if tree is complete, 0 otherwise
*/
int binary_tree_is_complete(const binary_tree_t *tree)
{
const binary_tree_t *queue[1024];
int front = 0, rear = 0, null_seen = 0;

if (!tree)
return (0);

queue[rear++] = tree;

while (front < rear)
{
const binary_tree_t *temp = queue[front++];

if (temp)
{
if (null_seen)
return (0);
queue[rear++] = temp->left;
queue[rear++] = temp->right;
}
else
{
null_seen = 1;
}
}

return (1);
}
