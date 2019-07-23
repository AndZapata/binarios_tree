#include "binary_trees.h"

/**
 * binary_tree_nodes - function that counts the nodes with at least
 * 1 child in a binary tree
 *
 * @tree: pointer to the root node of the tree to count the number of nodes
 * Return: if tree is NULL and if pointer is not a node, return null.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 1;

	if (tree == NULL)
		return (0);

	if (tree->left && tree->right)
	{
		count += binary_tree_nodes(tree->left) +
			binary_tree_nodes(tree->right);
		return (count);
	}
	else if (tree->left)
	{
		count += binary_tree_nodes(tree->left);
		return (count);
	}
	else if (tree->right)
	{
		count += binary_tree_nodes(tree->right);
		return (count);
	}
	else
		return (0);
}
