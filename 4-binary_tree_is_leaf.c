#include "binary_trees.h"

/**
 * binary_tree_delete - funtion to check if a node is a leaf.
 *
 * @node: pointer to the node to check.
 * Return: 0 if the node doesn't exists or no null and 1 if the nodes are null
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	else
		return (0);
}
