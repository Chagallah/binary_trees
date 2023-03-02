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
 * binary_tree_is_perfect - checks if a binary tree is perfect
 *
 * @tree: tree to be checked
 * Return: int
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t lheight, rheight, lperfect, rperfect;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	lheight = binary_tree_height(tree->left);
	rheight = binary_tree_height(tree->right);

	if (lheight != rheight)
		return (0);
	lperfect = binary_tree_is_perfect(tree->left);
	rperfect = binary_tree_is_perfect(tree->right);

	return (lperfect && rperfect);
}
