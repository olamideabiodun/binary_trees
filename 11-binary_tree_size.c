#include "binary_trees.h"
/**
 * binary_tree_size - returns the total size of a binary tree
 * @tree: pointer to the root node of the tree to measure
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_size(tree->right) + binary_tree_size(tree->left) + 1 : 0);
}

