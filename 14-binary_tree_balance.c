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

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 *
 * @tree: tree to be measured
 * Return: int
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int lHeight, rHeight;

	if (tree == NULL)
		return (0);

	lHeight = tree->left ? (int) binary_tree_height(tree->left) : -1;
	rHeight = tree->right ? (int) binary_tree_height(tree->right) : -1;

	return (lHeight - rHeight);
}
