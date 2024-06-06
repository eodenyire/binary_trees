#include "binary_trees.h"

/**
 * binary_tree_depth - to find the depth of tree from node
 * @tree: node to start from
 *
 * Return: depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int depth;

	if (tree = NULL)
		return (0);

	depth = binary_tree_depth(tree->parent) + 1;

	return (depth);
}
