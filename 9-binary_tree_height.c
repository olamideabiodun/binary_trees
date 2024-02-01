#include "binary_trees.h"
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

        if (tree->left)
        {
            left = 1 + binary_tree_height(tree->left);
        }
        left = 0;

        right = tree->right ? 1 + binary_tree_height(tree->right) : 0;

        return (left > right ? left : right);
    }
    return (0);

    
}
