#include "binary_trees.h"

/**
 * binary_tree_leaves - count leaves in binary tree
 * @tree: root node from which to measure
 * Return: total leaves at tree, 0 if tree is NULL
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	return (binary_tree_leaves(tree->left) +
		binary_tree_leaves(tree->right));
}
