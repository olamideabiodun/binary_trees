#include "binary_trees.h"
/**
 * binary_tree_size - returns total size of a binary tree
 * @tree: pointer to the root node of the tree to measure
 * Return: the size of the tree else 0 on failure
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree)
	{
		return (1 + binary_tree_size(tree->right) + binary_tree_size(tree->left));
	}
	return (0);
}
