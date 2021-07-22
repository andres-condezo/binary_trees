#include "binary_trees.h"

/**
 * binary_tree_height - a function to get the height of the binary tree
 * @tree: a pointer to the root node of the tree to count the number of nodes
 *
 * Return: the node
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
 size_t right_side = 0;
 size_t left_side = 0;

 if (tree == NULL || (tree->left == NULL && tree->right == NULL))
  return (0);

 left_side = 1 + binary_tree_height(tree->left);
 right_side = 1 + binary_tree_height(tree->right);

 if (left_side > right_side)
  return (left_side);
 return (right_side);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: a pointer to the root node of the tree to count the number of nodes
 *
 * Return: the node
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int leftSide = 0, rightSide = 0;

	if (!tree)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	leftSide = binary_tree_height(tree->left);
	rightSide = binary_tree_height(tree->right);

	if (leftSide == rightSide)
		return binary_tree_is_perfect(tree->left)
			* binary_tree_is_perfect(tree->right);

	return (0);
}
