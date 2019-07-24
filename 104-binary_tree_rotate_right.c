#include "binary_trees.h"

/**
 * binary_tree_is_complete - function that checks if a binary tree is complete
 *
 * @tree: is a pointer to the root node of the tree to rotate
 * Return: if tree is NULL, your function must return 0.
 */

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *temp, *aux;

	if (tree == NULL && tree->left == NULL)
		return (NULL);
	aux = tree->parent;
	temp = tree->left;
	tree->left = temp->right;
	if (temp->right != NULL)
		temp->right->parent = tree;
	temp->right = tree;
	tree->parent = temp;
	temp->parent = aux;
	return (temp);
}
