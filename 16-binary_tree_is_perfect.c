#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if tree is perfect
 * Description: considered perfect if it has leaf nodes that are at same level
 * all nodes have two children and tree is full
 *
 * @tree: pointer to root of tree
 * Return: 0 if not perfect, 1 if perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int r, l;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL || tree->right)
		return (0);

	r = binary_tree_is_perfect(tree->right);
	l = binary_tree_is_perfect(tree->left);

	if (r == l && r > 0 && l > 0)
	{
		if (tree->left != NULL && tree->right != NULL)
		{
			r = binary_tree_is_perfect(tree->right);
			l = binary_tree_is_perfect(tree->left);

			return (r && l);
		}
		else
		{
			return (0);
		}

	}

	return (0);
}
