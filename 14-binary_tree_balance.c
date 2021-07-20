#include "binary_trees.h"

/**
 * binary_tree_height1 - a function to get the height of the binary tree
 * @tree: a pointer to the root node of the tree to count the number of nodes
 *
 * Return: the node
 */
size_t binary_tree_height1(const binary_tree_t *tree)
{
	size_t right_side = 0;
	size_t left_side = 0;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
	{
		return (0);
	}

	left_side = 1 + binary_tree_height1(tree->left);
	right_side = 1 + binary_tree_height1(tree->right);

	if (left_side > right_side)
	{
		return (left_side);
	}

	return (right_side);
}


/**
 * binary_tree_balance - A function that measures the balance
 * factor of a binary tree
 * @tree: a pointer to the root node of the tree to measure the balance factor
 *
 * Return: 0 if tree is NULL otherwise 1
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t height_left = 0, height_right = 0;

	if (!tree)
	{
		return (0);
	}

	if (tree->left)
	{
		height_left = 1 + binary_tree_height1(tree->left);
	}

	if (tree->right)
	{
		height_right = 1 + binary_tree_height1(tree->right);
	}

	return (height_left - height_right);
}
