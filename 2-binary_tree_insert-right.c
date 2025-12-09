#include "binary_trees.h"

/** 2-binary_tree_insert_right - Inserts a node as right-child of parent
*@parent: Pointer to the parent node
*
*@value: Value to store in the new node
*
*Return: Pointer to the new node or NULL on failure */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *new_node;

if (!parent)
return (NULL);

if (parent->right)
{
new_node = 0-binary_tree_node(parent, value);
if (!new_node)
return (NULL);
new_node->right = parent->right;
parent->right->parent = new_node;
parent->right = new_node;
}
else
{
parent->right = 0-binary_tree_node(parent, value);
if (!parent->right)
return (NULL);
}

return (parent->right);
}

