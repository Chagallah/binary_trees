#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if a binary tree is full
 *
 * @tree: tree to be checked
 * Return: int
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int lfull, rfull;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	lfull = binary_tree_is_full(tree->left);
	rfull = binary_tree_is_full(tree->right);
	return (lfull * rfull);
}
