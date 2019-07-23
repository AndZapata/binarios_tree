#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 *
 * @tree: is a pointer to the root node of the tree to measure the height.
 * Return: if tree is NULL, your function must return 0.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h_left;
	size_t h_right;

	if (tree == NULL)
		return (0);

	h_left = binary_tree_height(tree->left);
	h_right = binary_tree_height(tree->right);

	if (h_left > h_right)
		return (h_left + 1);
	else
		return (h_right + 1);
}

/**
 * print_level - function to print by levels
 *
 * @tree: is a pointer to the root node of the tree to traverse
 * @lev:  is a pointer to the node to measure the depth
 * @func:  is a pointer to the node to measure the depth
 * Return: nothing
 */
void print_level(const binary_tree_t *tree, int lev, void(*func)(int))
{
	if (tree == NULL)
		return;
	if (lev == 1)
		func(tree->n);
	else if (lev > 1)
	{
		print_level(tree->left, lev - 1, func);
		print_level(tree->right, lev - 1, func);
	}
}

/**
 * binary_tree_levelorder - function that goes through a binary tree
 * using level-order traversal
 *
 * @tree: is a pointer to the root node of the tree to traverse
 * @func: is a pointer to a function to call for each node.
 * Return: if tree is NULL, your function must return 0.
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t height;
	size_t i;

	height = binary_tree_height(tree);
	for (i = 1; i <= height; i++)
		print_level(tree, i, func);
}
