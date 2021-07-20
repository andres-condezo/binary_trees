#include "binary_trees.h"

/**
 * binary_tree_insert_right - a function that inserts a node as the right
 * child of another node
 * @parent: is a pointer to the node to insert the right-child in
 * @value: is the value to store in the new node
 *
 * Return: a pointer to the created node, NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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

	if (parent->right == NULL)
	{
		parent->right = new_node;
	}
	else
	{
	temp = parent->right;
	parent->right = new_node;
	temp->parent = new_node;
	new_node->right = temp;
	}

	new_node->left = NULL;

	return (new_node);
}
