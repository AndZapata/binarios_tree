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

/**
 * binary_trees_ancestor - function that finds the lowest common
 * ancestor of two nodes
 *
 * @first: pointer to the first node
 * @second: pointer to the second node
 * Return: pointer to the lowest common ancestor, or null if it not found.
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	size_t one = 0, two = 0;

	if (!first || !second)
		return (NULL);
	one = binary_tree_depth(first);
	two = binary_tree_depth(second);
	for (; one > two; one--)
		first = first->parent;
	for (; two > one; two--)
		second = second->parent;
	while (first || second)
	{
		if (first == second)
			return ((binary_tree_t *) first);
		first = first->parent;
		second = second->parent;
	}
	return (NULL);
}
