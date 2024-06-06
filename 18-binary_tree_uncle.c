#include "binary_trees.h"

/**
 * binary_tree_t - returns sibling to parent of node
 * @node: node to get the uncle of
 *
 * Return: Uncle node or NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent, *grand_parent;

	if (node == NULL)
		return (NULL);
	if (node->parent == NULL)
		return (NULL);

	parent = node->parent;

	if (parent->parent == NULL)
		return (NULL);

	grand_parent = parent->parent;

	if (grand_parent->left != NULL && grand_parent->right != NULL)
	{
		if (grand_parent->left == parent)
		{
			return (grand_parent->right);
		}
		else if (grand_parent->right == parent)
		{
			return (grand_parent->left);
		}
	}

	return (NULL);
}
