#include "binary_trees.h"

/**
 * binary_tree_balance - finds the balance factor of a node
 * Description: bf = height_of_left_subtree - height_of_right_subtree
 * @tree: node to get balance factor off
 *
 * Return: BF
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int r, l, BF;

	if (tree == NULL)
		return (0);

	r = tree->right ? binary_tree_balance(tree->right) + 1 : 0;
	l = tree->left ? binary_tree_balance(tree->left) + 1 : 0;

	BF = r + l;

	return (BF);
}
