#include "binary_trees.h"

/**
*@tree: Pointer to the root node of the tree
*
*Return: Size (number of nodes) of the tree, 0 if tree is NULL */

size_t binary_tree_size(const binary_tree_t *tree)
{
if (!tree)
return (0);

return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
