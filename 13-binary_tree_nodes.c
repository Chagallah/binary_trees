#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 *
 * @tree: tree to count
 *
 * Return: 0 if 
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t lHeight, rHeight;

	if (
		tree == NULL || (
			tree->left == NULL && tree->right == NULL
		)
	)
		return (0);

	lHeight = binary_tree_nodes(tree->left);
	rHeight = binary_tree_nodes(tree->right);

	return (
		lHeight +
		1 + rHeight
	);
}
