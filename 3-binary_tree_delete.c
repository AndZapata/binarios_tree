#include "binary_trees.h"

/**
 * binary_tree_delete - function to free a binary tree
 *
 * @tree: pointer to the complete binary tree
 * Return: nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if (tree->right != NULL)
			binary_tree_delete(tree->right);
		if (tree->left != NULL)
			binary_tree_delete(tree->left);
		free(tree);
	}
}
