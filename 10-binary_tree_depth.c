#include "binary_trees.h"

/**
*@node: Pointer to the node
*
*Return: Depth of the node, 0 if node is NULL */

size_t binary_tree_depth(const binary_tree_t *node)
{
size_t depth = 0;

if (!node)
return (0);

while (node->parent)
{
depth++;
node = node->parent;
}

return (depth);
}
