#include "binary_trees.h"

/**
 * binary_tree_insert_right - Comentario
 *
 * @parent: Comentario
 * @value: Comentario
 * Return: Comentario
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_nod;

	if (!parent)
		return (NULL);
	right_nod = binary_tree_node(parent, value);
	if (parent->right != NULL)
	{
		parent->right->parent = right_nod;
		right_nod->right = parent->right;
	}
	parent->right = right_nod;
	return (right_nod);
}
