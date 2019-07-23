#include "binary_trees.h"

/**
 * binary_tree_uncle - function that finds the uncle of a node.
 *
 * @node: is a pointer to the node to find the uncle
 * Return: null if node, parent or uncle doesn't exists, otherwise return node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);
	if (node->parent->parent && node->parent == node->parent->parent->left)
		return (node->parent->parent->right);
	else
		return (node->parent->parent->left);
}
