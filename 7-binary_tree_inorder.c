#include "binary_trees.h"

/**
 * binary_tree_inorder - recursive proceed through `binary_tree_t`
 * binary tree using in-order traversal
 * @tree: root node of tree to traverse
 * @func: pointer function to call for each node; value in node is
 * passed as parameter to `func`
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
