#include "binary_trees.h"

/**
 * binary_tree_is_leaf - returns true if node is a leaf and
 * false if node is not a leaf
 * @node: node to check
 * Return: false if not leaf, true if leaf
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->right == NULL && node->left == NULL)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

