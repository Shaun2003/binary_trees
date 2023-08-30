#include "binary_trees.h"

/**
 * binary_tree_postorder - recursive proceed through `binary_tree_t`
 * binary tree using post-order traversal
 * @tree: root node of tree to traverse
 * @func: pointer function to call for each node; value in node is
 * passed as parameter to `func`
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
