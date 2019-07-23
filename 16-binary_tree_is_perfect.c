#include "binary_trees.h"

/**
 * binary_tree_insert_right - Comentario
 *
 * @parent: Comentario
 * @value: Comentario
 * Return: Comentario
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
 * binary_tree_insert_right - Comentario
 *
 * @parent: Comentario
 * @value: Comentario
 * Return: Comentario
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
* binary_tree_insert_right - Comentario
 *
 * @parent: Comentario
 * @value: Comentario
 * Return: Comentario
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
