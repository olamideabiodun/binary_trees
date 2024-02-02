#include "binary_trees.h"
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    int left_height = 0;

    if (tree == NULL)
    return (0);

    left_height = calc_height(tree->left);

    return is_perfect_tree_util(tree, left_height, 0);
}

int is_perfect_tree_util(const binary_tree_t *tree, int left_height, int level)
{
    if (tree == NULL)
    return (1);

    if (tree->left == NULL && tree->right == NULL)
    return (left_height == level + 1);

    if (tree->left == NULL || tree->right == NULL)
    return (0);

    return (is_perfect_tree_util(tree->left, left_height, level + 1) &&
            is_perfect_tree_util(tree->right, left_height, level + 1));
}

int calc_height(const binary_tree_t *tree)
{
    int left_height = 0, right_height = 0;
    if (tree == NULL)
    return (0);

    left_height = calc_height(tree->left);
    right_height = calc_height(tree->right);

    return (left_height + 1);
}
