#include "binary_trees.h"

/**
 * binary_tree_insert_right - Comentario
 *
 * @parent: Comentario
 * @value: Comentario
 * Return: Comentario
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->left != NULL && node->right != NULL && node->parent == NULL)
		return (1);
	else
		return (0);
}
