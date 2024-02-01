#include "binary_trees.h"
/**
 * binary_tree_postorder - goes through bin_tree using post-order transversal
 * @tree: pointer to the root node of the tree to transverse
 * @func: pointer to the function to call for each node
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}

