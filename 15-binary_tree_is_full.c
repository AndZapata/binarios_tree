#include "binary_trees.h"

/**
 * binary_tree_is_full -  function that checks if a binary tree is full.
 *
 * @tree: is a pointer to the root node of the tree to check
 * Return: 0 if the tree is null, 1 if left and right doens't exists,
 * recursion of right and left.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	else if (!tree->left && !tree->right)
		return (1);
	else if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));
	else
		return (0);
}
