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
	binary_tree_t *new_node = NULL;
	binary_tree_t *temp;

	if (!parent)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(binary_tree_t));

	if (!new_node)
	{
		return (NULL);
	}

	new_node = binary_tree_node(parent, value);

	if (parent->left == NULL)
	{
		parent->left = new_node;
	}
	else
	{
	temp = parent->left;
	parent->left = new_node;
	temp->parent = new_node;
	new_node->left = temp;
	}

	new_node->right = NULL;

	return (new_node);
}
