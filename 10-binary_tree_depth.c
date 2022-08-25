#include "binary_trees.h"

/**
 * size_t binary_tree_depth(const binary_tree_t *tree)
 *
 * @tree: a pointer to the node to measure the depth
 *
 * Return: depth of a node or 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
		return (0);
	return (binary_tree_depth(tree->parent) + 1);
}
