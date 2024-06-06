#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the number of leaves in a tree
 * @tree: tree whos leaves are being counted
 *
 * Return: number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t r, l;

	if (tree == NULL)
		return (0);

	if (tree->right == NULL && tree->left == NULL)
		return (1);

	l = binary_tree_leaves(tree->left);
	r = binary_tree_leaves(tree->right);

	return (r + l);
}
