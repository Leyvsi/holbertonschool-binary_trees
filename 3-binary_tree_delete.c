#include <stdlib.h>
#include "binary_trees.h"

/** 3-binary_tree_delete - Deletes an entire binary tree
*@tree: Pointer to the root node of the tree
*
*Return: Nothing */

void binary_tree_delete(binary_tree_t *tree)
{
if (!tree)
return;

3-binary_tree_delete(tree->left);
3-binary_tree_delete(tree->right);
free(tree);
}
