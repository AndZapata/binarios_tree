#include "binary_trees.h"

/**
 * tree_size - function that measures the size of a binary tree
 *
 * @tree: is a pointer to the root node of the tree to measure the size
 * Return: If tree is NULL, the function must return 0.
 */

unsigned int tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (tree_size(tree->left) + 1 +
		tree_size(tree->right));
}

/**
 * binary_tree_depth - function that measures the depth of a node
 * in a binary tree
 *
 * @tree: is a pointer to the root node of the tree to check
 * @index: index
 * @count: number of nodes
 * Return: recursion.
 */

int complete_tree(const binary_tree_t *tree, unsigned int index,
		  unsigned int count)
{
	if (tree == NULL)
		return (1);

	if (index >= count)
		return (0);

	return (complete_tree(tree->left, 2 * index + 1, count) &&
		complete_tree(tree->right, 2 * index + 2, count));
}

/**
 * binary_tree_is_complete - function that checks if a binary tree is complete
 *
 * @tree: is a pointer to the root node of the tree to rotate
 * Return: if tree is NULL, your function must return 0.
 */

int binary_tree_is_complete(const binary_tree_t *tree)
{
	unsigned int counter = tree_size(tree);
	unsigned int index = 0;

	return (complete_tree(tree, index, counter));
}
