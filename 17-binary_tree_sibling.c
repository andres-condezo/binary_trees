#include "binary_trees.h"

/**
 * binary_tree_sibling - a function that finds the sibling of a node
 * @tree: a pointer to the root node of the tree to count the number of nodes
 *
 * Return: the node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
        if (!node || !node->parent)
                return (NULL);
        if (!node->parent->left || !node->parent->right)
                return (NULL);

        if (node->parent->left == node)
                return (node->parent->right);
        return(node->parent->left);
}
