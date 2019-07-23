#include "binary_trees.h"

/**
 * binary_tree_insert_right - Comentario
 *
 * @parent: Comentario
 * @value: Comentario
 * Return: Comentario
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	else
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
