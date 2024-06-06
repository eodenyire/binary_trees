#include "binary_trees.h"

/**
 * binary_tree_nodes - returns count of nodes with atleast one child
 * @tree: pointer to root of tree
 *
 * Return: total
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t r, l;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL  && tree->right == NULL)
		return (0);

	r = binary_tree_nodes(tree->right);
	l = binary_tree_nodes(tree->left);

	return (r + l + 1);
}
