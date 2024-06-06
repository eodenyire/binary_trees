#include "binary_trees.h"

/**
 * binary_tree_size - returns the size of a binary tree
 * @tree: tree to get size of
 *
 * Return: size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t r, l;

	if (tree == NULL)
		return (0);

	r = tree->left ? binary_tree_size(tree->left) + 1 : 0;
	l = tree->right ? binary_tree_size(tree->right) + 1 : 0;

	return (r + l);
}
