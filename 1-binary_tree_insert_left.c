#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 *
 * @parent: parent
 * @value: value
 * Return: new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);
	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);
	new->left = parent->left;
	if (new->left)
	new->left->parent = new;
	parent->left = new;
	return (new);
}
