#include "binary_trees.h"
/**
 * @brief binary_tree_is_root - check if node is a root node
 *
 * @param node - pointer to the node to check
 * @return int -1 if node is a root, otherwise 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
if (node == NULL)
{
return (0);
}
if (node->parent == NULL)
{
return (1);
}
return (0);
}
