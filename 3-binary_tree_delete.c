#include "binary_trees.h"

/**
 * binary_tree_delete - a function that deletes an entire binary tree
 * @tree:  is a pointer to the root node of the tree to delete
 *
 * Return: void
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	tree->left = NULL;
	tree->parent = NULL;
	tree->right = NULL;
	free(tree);
}
