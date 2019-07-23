#include "binary_trees.h"

/**
 * binary_tree_insert_left - Comentario
 *
 * @parent: Comentario
 * @value: Comentario
 * Return: Comentario
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_nod;

	if (!parent)
		return (NULL);
	left_nod = binary_tree_node(parent, value);
	if (parent->left)
	{
		parent->left->parent = left_nod;
		left_nod->left = parent->left;
	}
	parent->left = left_nod;
	return (left_nod);
}
