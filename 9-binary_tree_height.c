#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree: tree to measure
 *
 * Return: tree height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lHeight, rHeight;

	if (tree == NULL)
		return (0);

	lHeight = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	rHeight = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (lHeight > rHeight ? lHeight : rHeight);
}
