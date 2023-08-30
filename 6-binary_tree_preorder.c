#include "binary_trees.h"

/**
 * binary_tree_preorder - recursive proceeds through `binary_tree_t`
 * binary tree using pre-order traversal
 * @tree: root node of tree to traverse
 * @func: pointer to function to call for each node; value in node is
 * passed as parameter to `func`
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
