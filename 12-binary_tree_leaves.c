#include "binary_trees.h"
/**
 * binary_tree_leaves - count number of leaves
 *
 * @tree: root node
 *
 * Return: number of leaves, 0 if NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
	{
		return (0);
	}
	if ((tree->left == NULL) && (tree->right == NULL))
	{
		return (1);
	}
	return (binary_tree_leaves(tree->left) +
		binary_tree_leaves(tree->right));
}