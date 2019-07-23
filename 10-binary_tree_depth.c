#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures the depth of a node
 * in a binary tree
 *
 * @tree:  is a pointer to the node to measure the depth
 * Return: if tree is NULL, your function must return 0.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t i = 0;
	const binary_tree_t *temp;

	if (tree == NULL)
		return (0);

	for (temp = tree; temp && temp->parent; temp = temp->parent)
		i++;
	return (i);
}
