#include "binary_trees.h"
/**
 * binary_tree_size-measure size of the tree
 *
 * @tree: tree to be measure
 * Return: size_t
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t sleft, sright;

	if (tree == NULL)
		return (0);

	sleft = binary_tree_size(tree->left);
	sright = binary_tree_size(tree->right);

	return (sleft + 1 + sright);
}
