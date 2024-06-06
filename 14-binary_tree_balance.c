#include "binary_trees.h"

/**
 *
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);

	left = tree->left ? binary_tree_balance(tree->left) + 1 : 0;
	right = tree->right ? binary_tree_balance(tree->right) + 1 : 0;

	return ((r > l) ? r : l;
}

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

	r = tree->right ? (int)binary_tree_height(tree->right) + 1 : 0;
	l = tree->left ? (int)binary_tree_height(tree->left) + 1 : 0;

	BF = l - r;

	return (BF);
}
