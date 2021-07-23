#include "binary_trees.h"

/**
 * binary_tree_insert_left - A function that creates a binary tree node.
 * @parent: a pointer to the parent node of the node to create
 * @value: is the value to put in the new node
 *
 * Return: a pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_child = NULL;

	if (!parent)
		return (NULL);

	left_child = binary_tree_node(parent, value);
	if (!left_child)
		return (NULL);
	if (parent->left)
	{
		left_child->left = parent->left;
		left_child->left->parent = left_child;
	}
	parent->left = left_child;
	return (left_child);
}
