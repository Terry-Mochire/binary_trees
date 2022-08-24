#include "binary_trees.h"
/**
 * binary_tree_insert_left -  inserts a node as the left-child of another node
 * @parent: pointer to parent node
 * @value: value to store in
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *node;
if (parent == NULL)
{
return (NULL);
}
node = binary_tree_node(parent, value);
if (node == NULL)
{
return (NULL);
}
if (parent->left == NULL)
{
parent->left = node;
}
else
{
parent->left = node;
node->left = parent->left;
node->left->parent = node;
}
return (node);
}
