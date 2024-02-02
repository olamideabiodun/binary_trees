#include "binary_trees.h"
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: the balance factor else 0 if tree is NULL
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int balance = 0, left = 0, right = 0;

	if (tree)
	{
		left = tree->left ? 1 + binary_tree_balance(tree->left) : 0;
		right = tree->right ? 1 + binary_tree_balance(tree->right) : 0;
		return (balance = left - right);
	}
	return (0);
}

