#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that insert a node as the left-child.
 *
 * @parent: ppointer to the node to insert the left-child
 * @value: is the value to store in the new node
 * Return: felt_nod, or null if the parent doesn't exists.
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
