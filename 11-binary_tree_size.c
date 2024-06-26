#include "binary_trees.h"

/**
 * binary_tree_size - returns the size of a binary tree
 * @tree: tree to get size of
 *
 * Return: size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size;

	if (tree == NULL)
		return (0);

	size  = (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));

	return (size);
}
