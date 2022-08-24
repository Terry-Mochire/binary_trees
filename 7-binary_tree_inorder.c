#include "binary_trees.h"
/**
 * @brief binary_tree_inorder- traverse a tree in-order
 *
 * @param tree: pointer to the root node of the tree to traverse
 * @param func: pointer to a function to call for each node
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
{
return;
}
binary_tree_inorder(tree->left, func);
func(tree->n);
binary_tree_inorder(tree->right, func);
}
