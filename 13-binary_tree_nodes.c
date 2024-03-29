#include "binary_trees.h"
/**
 * binary_tree_nodes - count nodes with at least one child in a binary tree
 * @tree: pointer to the root node of the tree to count the number of nodes
 * Return: 0 if tree is NUll else the count of nodes
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree)
	{
		if (!tree->left && !tree->right)
		{
			return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
		}
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
	}
	return (0);
}

