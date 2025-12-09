#include "binary_trees.h"

/** 6-binary_tree_preorder - Goes through a binary tree using preorder traversal
*@tree: Pointer to the root node of the tree
*
*@func: Pointer to a function to call for each node
*
*Return: Nothing */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
if (!tree || !func)
return;

func(tree->n);
6-binary_tree_preorder(tree->left, func);
6-binary_tree_preorder(tree->right, func);
}
