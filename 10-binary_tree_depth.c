#include "binary_trees.h"

/**
 * binary_tree_insert_right - Comentario
 *
 * @parent: Comentario
 * @value: Comentario
 * Return: Comentario
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t i = 0;
	const binary_tree_t *temp;

	if (tree == NULL)
		return (0);
	else
	{
		for (temp = tree; temp && temp->parent; temp = temp->parent)
			i++;
		return (i);
	}
}
