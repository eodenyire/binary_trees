#include "binary_trees.h"

/**
 * binary_tree_is_full - check if all nodes are leafs or have two children
 * @tree: pointer to root of tree
 *
 * Return:
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	else if (tree->left != NULL && tree->right != NULL)
	{
		return (binary_tree_is_full(tree->right) && binary_tree_is_full(tree->left));
	}

	return (0);
}
