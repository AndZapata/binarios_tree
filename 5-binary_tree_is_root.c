#include "binary_trees.h"

/**
 * binary_tree_is_root - function to check if a given node is a root
 *
 * @node: is a pointer to the node to check
 * Return: 1 if the node is a root, otherwise 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->left != NULL && node->right != NULL && node->parent == NULL)
		return (1);
	else
		return (0);
}
