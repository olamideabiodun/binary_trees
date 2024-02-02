#include "binary_trees.h"
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: the balance factor else 0 if tree is NULL
*/
int binary_tree_balance(const binary_tree_t *tree)
{
    if (tree)
    {
        return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
    }
    return (0);
}


/**
 * binary_tree_height - measures the hight of a tree
 * @tree: pointer to the root node of the tree to measure
 * Return: the height of the tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t left = 0, right = 0;

		right = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		left = tree->left ? 1 + binary_tree_height(tree->left) : 1;

		return (left > right ? left : right);
	}
	return (0);
}
