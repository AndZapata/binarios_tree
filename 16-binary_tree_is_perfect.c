#include "binary_trees.h"

/**
 * binary_tree_height - Comentario
 *
 * @tree: is a pointer to the root node of the tree to measure the height.
 * Return: if tree is NULL, your function must return 0.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h_left;
	size_t h_right;

	h_left = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	h_right = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (h_left > h_right ? h_left : h_right);
}

/**
 * binary_tree_balance -  function that measures the balance factor
 * of a binary tree
 *
 * @tree: is a pointer to the root node of the tree to measure
 * the balance factor.
 * Return: 0 if the tree is null.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int bal_left = 0, bal_right = 0;

	if (!tree)
		return (0);
	if (tree->left)
		bal_left = 1 + binary_tree_height(tree->left);
	if (tree->right)
		bal_right = 1 + binary_tree_height(tree->right);
	return (bal_left - bal_right);
}

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 *
 * @tree: is a pointer to the root node of the tree to check
 * Return: 0 if three is null
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!binary_tree_balance(tree))
	{
		if (!binary_tree_height(tree->left) &&
		    !binary_tree_height(tree->right))
			return (1);
		else
			return (binary_tree_is_perfect(tree->left) &&
				binary_tree_is_perfect(tree->right));
	}
	else
		return (0);
}
