#include "binary_trees.h"

/**
 * binary_tree_leaves - a function that measures the size of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the size
 *
 * Return: 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	count = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);
	return (count);
}
