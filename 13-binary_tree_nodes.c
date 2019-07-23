#include "binary_trees.h"

/**
 * binary_tree_insert_right - Comentario
 *
 * @parent: Comentario
 * @value: Comentario
 * Return: Comentario
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 1;
	if (tree == NULL)
		return (0);
	else
	{
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
}
