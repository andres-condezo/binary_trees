#include "binary_trees.h"

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)

{
	binary_tree_t *anc = (binary_tree_t *)first;
	binary_tree_t *anc2 = (binary_tree_t *)second;

	while (anc)
	{
		anc2 = (binary_tree_t *)second;
		while (anc2)
		{
			if (anc == anc2)
			{
				return (anc);
			}
			anc2 = anc2->parent;
		}
		anc = anc->parent;
	}

	return (NULL);
}
