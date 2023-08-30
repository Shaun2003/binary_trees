#include "binary_trees.h"

/**
 * binary_tree_uncle - find uncle to node, sibling to node parent
 * @node: node to check
 * Return: pointer to sibling node of parent to node, NULL if none found
 * or node is NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node)
		return (NULL);

	if (node->parent && node->parent->parent)
	{
		if (node->parent->parent->left == node->parent)
			return (node->parent->parent->right);
		if (node->parent->parent->right == node->parent)
			return (node->parent->parent->left);
	}
	return (NULL);
}
