#include "binary_trees.h"
#include <limits.h>

/**
 * bst_insert_recursive - helper function that creates a new node
 *
 * @tree: is a double pointer to the root node of the BST to insert
 * @par: pointer to the parent node to insert the newest node
 * @value: the value to store in the node to be inserted
 * Return: a pointer to the newest node to be insert, NULL if fail
 */
bst_t *bst_insert_recursive(bst_t **tree, bst_t *par, int value)
{
	if (!*tree)
		*tree = (binary_tree_node(par, value));
	else if (value < (*tree)->n)
		return (bst_insert_recursive(&(*tree)->left, *tree, value));
	else if (value > (*tree)->n)
		return (bst_insert_recursive(&(*tree)->right, *tree, value));
	else
		return (NULL);
	return (*tree);
}
/**
 * bst_insert - function that inserts a value in a Binary Search Tree
 *
 * @tree: double pointer to the root node of the BST to insert the value
 * @value: the value to store in the node to be inserted
 * Return: new node or NULL if there's no tree
 */

bst_t *bst_insert(bst_t **tree, int value)
{
	if (!tree)
		return (NULL);
	return (bst_insert_recursive(tree, NULL, value));
}
