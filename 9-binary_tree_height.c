#include "binary_trees.h"

/**
 * binary_tree_height - finds the height of a tree
 * @tree: tree who's height to get
 *
 * Return: height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int r, l;

	if (tree == NULL)
		return (0);
	r = binary_tree_height(tree->left);
	l = binary_tree_height(tree->right);

	return (((r > l) ? r : l) + 1);
}
