#include "binary_trees.h"
/**
 * binary_tree_is_leaf- node leaf
 * @node: Pointer
 * Return: Leaf
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!node->left && !node->right)
		return (1);

	return (0);
}
