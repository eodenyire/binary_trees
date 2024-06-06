#include "binary_trees.h"

/**
 * binary_tree_postorder - traverse tree in post order calling func
 * on nodes
 * @tree: tree to traverse
 * @func: func to call on nodes
 *
 * Return: void
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func == NULL)
		return;
	if (tree == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
