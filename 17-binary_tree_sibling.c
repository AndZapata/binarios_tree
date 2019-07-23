#include "binary_trees.h"
/**
* binary_tree_insert_right - Comentario
 *
 * @parent: Comentario
 * @value: Comentario
 * Return: Comentario
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node->parent && node == node->parent->left)
		return (node->parent->right);
	else
		return (node->parent->left);
}
