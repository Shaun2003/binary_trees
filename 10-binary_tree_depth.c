#include "binary_trees.h"

/**
 * binary_tree_depth - measure depth of node in binary tree
 * @tree: node from which to measure backwards, starting at 0
 * Return: level from root, 0 if tree is NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (!tree)
		return (0);

	for (depth = 0; tree->parent; depth++)
		tree = tree->parent;

	return (depth);
}
