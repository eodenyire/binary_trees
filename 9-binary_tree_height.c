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
	r = tree->left ? binary_tree_height(tree->left) + 1: 0;
	l = tree->right ? binary_tree_height(tree->right) + 1 : 0;

	return ((r > l) ? r : l);
}
