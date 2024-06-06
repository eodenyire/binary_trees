#include "binary_trees.h"

/**
 * binary_tree_t - gets the sibling of a node
 * @node: node to get sibling of
 * Return: returns a pointer to sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return NULL;

	binary_tree_t *parent = node->parent;

	if (parent->left == NULL || parent->right == NULL)
	{
		return (NULL);
	}
	else if (parent->left == node)
	{
		return (parent->right);
	}
	else if (parent->right == node)
	{
		return (parent->left);
	}

	return NULL;
}
