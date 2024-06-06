#include "binary_trees.h"

/**
 * binary_tree_preorder - uses preorder traversal on tree
 * calling func on each node with tree->n as parameter
 * Description: starts at root node and calls func(tree->n)
 * moves to left side of tree recursively then right
 *
 * @tree: tree to traverse
 * @func: function to call on each node of tree
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func == NULL)
		return;

	if (tree == NULL)
		return;

	func(tree->n);

	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
