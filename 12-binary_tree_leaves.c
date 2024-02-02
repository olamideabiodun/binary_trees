#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the leaves on a binary tree
 * @tree: pointer to the root node of the pointer to count number of leaves
 * Return: the count of leaves else 0 if tree is NULL
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree)
	{
		leaves = (!tree->left && !tree->right ? 1 : 0);
		leaves += binary_tree_leaves(tree->left);
		leaves += binary_tree_leaves(tree->right);
	}
	return (leaves);
}

