#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 *
 * @node: node to be checked
 * Return: binary_tree_t*
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if ((node == NULL) || (node->parent == NULL))
		return (NULL);
	parent = node->parent;

	if (parent->left == node)
		return (parent->right);
	return (parent->left);
}
