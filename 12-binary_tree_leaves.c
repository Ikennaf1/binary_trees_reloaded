#include "binary_trees.h"

/**
 * size_t binary_tree_leaves - Counts the leaves in a binary tree
 * @tree: Given binary tree
 * Return: `int` Number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
    size_t count = 0;

    if (tree) {
        if (tree->left == NULL && tree->right == NULL) {
            count = 1 + binary_tree_leaves(tree->left);
        } else {
            count += binary_tree_leaves(tree->left);
            count += binary_tree_leaves(tree->right);
        }
        return (count);
    } else {
        return (0);
    }
}